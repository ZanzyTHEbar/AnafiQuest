using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace PA_DronePack
{
    public class PA_DroneCamera : MonoBehaviour
    {
        #region Variables
        public enum CameraMode { thirdPerson, firstPerson }
        public enum FollowMode { firm, smooth }
        public CameraMode cameraMode = CameraMode.thirdPerson;
        public FollowMode followMode = FollowMode.firm;

        public PA_DroneController target = null;
        public Transform fpsPosition = null;

        [Range(0.03f, 0.5f)]
        public float followSmoothing = 0.1f;
        [Range(0f, 8f)]
        public float xSensitivity = 2f;
        [Range(0f, 4f)]
        public float ySensitivity = 1f;
        [Range(0f, 16f)]
        public float tiltSensitivity = 1f;

        public float height = 0.5f;
        public float distance = 1.5f;
        public float angle = 19;

        public bool findTarget = true;
        public bool autoPosition = true;
        public bool freeLook = false;
        public bool findFPS = true;
        public bool gyroscopeEnabled;
        public bool invertYAxis = false;

        public List<Rigidbody> jitterRigidBodies;
        #endregion

        #region Hidden Variables
        Vector3 velocity;
        float fpsMinAngle = -20;
        float fpsMaxAngle = 70;
        float angleV;
        float tiltForce;
        float turnForce;
        float liftForce;
        float targetRot;
        #endregion

        void Start()
        {
            #region Auto Find Targets / Calculate Distances
            if (findTarget) { target = FindObjectOfType<PA_DroneController>(); if (target == null) { Debug.LogWarning("PA_DroneCamera : Could Not Find A Target"); } }
            if (findFPS) { fpsPosition = GameObject.Find("FPSView").transform; if (fpsPosition == null) { Debug.LogWarning("PA_DroneCamera : Could Not Find FPS Position"); } }
            if (autoPosition && target)
            {
                float xdist = Mathf.Abs(target.transform.position.x - transform.position.x);
                float zdist = Mathf.Abs(target.transform.position.z - transform.position.z);
                distance = (xdist > zdist) ? xdist : zdist;
                height = Mathf.Abs(target.transform.position.y - transform.position.y);
                angle = transform.eulerAngles.x;
            }
            else if (!target)
            {
                Debug.LogError("PA_DroneCamera : Missing Target");
            }
            #endregion
        }

        void Update()
        {
            #region FreeLook
            if (freeLook && cameraMode == CameraMode.thirdPerson) { target.TurnInput(0); }
            #endregion
        }

        // Firm follow mode is handled in LateUpadte to avoid camera Jitter //
        void LateUpdate()
        {
            #region ThirdPerson Firm
            if (freeLook && cameraMode == CameraMode.thirdPerson) { target.TurnInput(0); }
            if (target && followMode == FollowMode.firm && cameraMode == CameraMode.thirdPerson) {
                if (target.rigidBody.interpolation != RigidbodyInterpolation.Interpolate && !GetComponent<Camera>().targetTexture) {
                    target.rigidBody.interpolation = RigidbodyInterpolation.Interpolate;
                }
                height += (angle > -60 && angle < 60) ? liftForce * 0.03f : 0f;
                angle = Mathf.Clamp(angle + liftForce, -60, 60);
                targetRot = (freeLook) ? targetRot + (turnForce * xSensitivity) : target.transform.eulerAngles.y;
                transform.position = (target.transform.position - Quaternion.Euler(0, targetRot, 0) * Vector3.forward * distance) + new Vector3(0, height, 0);
                transform.rotation = Quaternion.Euler(angle, targetRot, 0);
                foreach (Rigidbody rigidBody in jitterRigidBodies) {
                    if (rigidBody.interpolation != RigidbodyInterpolation.Interpolate && !GetComponent<Camera>().targetTexture) {
                        rigidBody.interpolation = RigidbodyInterpolation.Interpolate;
                    }
                }
            }
            #endregion

            #region FirstPerson Firm
            if (target && fpsPosition && cameraMode == CameraMode.firstPerson)
            {
                target.rigidBody.interpolation = RigidbodyInterpolation.Interpolate;
                transform.position = fpsPosition.position;
                transform.rotation = (!gyroscopeEnabled) ? Quaternion.Euler(target.transform.rotation.eulerAngles.x + tiltForce, fpsPosition.rotation.eulerAngles.y, fpsPosition.rotation.eulerAngles.z) : Quaternion.Euler(tiltForce, fpsPosition.rotation.eulerAngles.y, 0);
                fpsPosition.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, target.transform.rotation.eulerAngles.y, target.transform.rotation.eulerAngles.z);
                foreach (Rigidbody rigidBody in jitterRigidBodies)
                {
                    rigidBody.interpolation = RigidbodyInterpolation.Interpolate;
                }
            }
            #endregion
        }

        // Smooth follow mode is handled in FixedUpadte to avoid camera Jitter //
        void FixedUpdate()
        {
            #region ThirdPerson Smooth
            if (freeLook && cameraMode == CameraMode.thirdPerson) { target.TurnInput(0); }
            if (target && followMode == FollowMode.smooth && cameraMode == CameraMode.thirdPerson)
            {
                if (target.rigidBody.interpolation != RigidbodyInterpolation.None && !GetComponent<Camera>().targetTexture) { target.rigidBody.interpolation = RigidbodyInterpolation.None; }
                height += (angle > -60 && angle < 60) ? liftForce * 0.03f : 0f;
                angle = Mathf.Clamp(angle + liftForce, -60, 60);
                targetRot = (freeLook) ? targetRot + (turnForce * xSensitivity) : target.transform.eulerAngles.y;
                float smoothAngle = Mathf.SmoothDampAngle(transform.eulerAngles.y, targetRot, ref angleV, (followSmoothing * Time.fixedDeltaTime) * 60f);
                Vector3 desiredPos = (target.transform.position - Quaternion.Euler(0, smoothAngle, 0) * Vector3.forward * distance) + new Vector3(0, height, 0);
                transform.position = Vector3.SmoothDamp(transform.position, desiredPos, ref velocity, (followSmoothing * Time.fixedDeltaTime) * 60f);
                transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.Euler(angle, targetRot, 0), (followSmoothing * Time.fixedDeltaTime) * 60f);
                foreach (Rigidbody rigidBody in jitterRigidBodies)
                {
                    if (rigidBody.interpolation != RigidbodyInterpolation.None && !GetComponent<Camera>().targetTexture)
                    {
                        rigidBody.interpolation = RigidbodyInterpolation.None;
                    }
                }
            }
            #endregion
        }

        #region Custom Functions
        public void ChangeCameraMode() { cameraMode = (cameraMode == CameraMode.firstPerson) ? CameraMode.thirdPerson : CameraMode.firstPerson; }
        public void ChangeFollowMode() { followMode = (followMode == FollowMode.smooth) ? FollowMode.firm : FollowMode.smooth; }
        public void ChangeGyroscope() { gyroscopeEnabled = !gyroscopeEnabled; }
        public void LiftInput(float input) { liftForce = (!invertYAxis) ? input * ySensitivity : -input * ySensitivity; }
        public void TurnInput(float input) { turnForce = input * xSensitivity; }
        public void TiltInput(float input) { tiltForce = Mathf.Clamp(tiltForce + (-input * tiltSensitivity), fpsMinAngle, fpsMaxAngle); }
        public void CanFreeLook(bool state) { freeLook = state; }
        public void XSensitivity(float value) { xSensitivity = value; }
        public void YSensitivity(float value) { ySensitivity = value; }
        public void InvertYAxis(bool state) { invertYAxis = state; }
        #endregion
    }
}