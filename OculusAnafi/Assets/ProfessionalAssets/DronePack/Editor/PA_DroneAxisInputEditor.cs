using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace PA_DronePack
{
    [CustomEditor(typeof(PA_DroneAxisInput))]
    [CanEditMultipleObjects]
    public class PA_DroneAxisInputEditor : Editor
    {
        #region varibles
        PA_DroneAxisInput daiScript;
        #endregion

        public void OnEnable()
        {
            #region targets
            daiScript = (PA_DroneAxisInput)target;
            #endregion
        }

        public override void OnInspectorGUI()
        {
            #region Edit Script
            GUI.enabled = false;
            EditorGUILayout.ObjectField("Script", MonoScript.FromMonoBehaviour(daiScript), typeof(PA_DroneAxisInput), false);
            GUI.enabled = true;
            #endregion

            #region Input Type
            SerializedProperty inputType = serializedObject.FindProperty("inputType");
            EditorGUILayout.PropertyField(inputType);
            GUILayout.Space(10f);
            #endregion

            #region Input
            if (daiScript.inputType == PA_DroneAxisInput.InputType.Custom) {
                daiScript.UpdateInput();
                EditorGUILayout.LabelField("Input Axis", EditorStyles.boldLabel);
                daiScript._forwardBackward = EditorGUILayout.TextField("Forward & Backward", daiScript._forwardBackward);
                daiScript._strafeLeftRight = EditorGUILayout.TextField("Strafe Left & Right", daiScript._strafeLeftRight);
                daiScript._riseLower = EditorGUILayout.TextField("Rise & Lower", daiScript._riseLower);
                daiScript._turn = EditorGUILayout.TextField("Turn", daiScript._turn);
                GUILayout.Space(10f);
                daiScript._cameraRiseLower = EditorGUILayout.TextField("Camera Rise & Lower", daiScript._cameraRiseLower);
                daiScript._cameraTurn = EditorGUILayout.TextField("Camera Turn", daiScript._cameraTurn);
                daiScript._cameraTilt = EditorGUILayout.TextField("Camera Tilt (FPV Only)", daiScript._cameraTilt);
                GUILayout.Space(10f);
                EditorGUILayout.LabelField("Input Axis / Button / Keycode", EditorStyles.boldLabel);
                daiScript._toggleMotor = EditorGUILayout.TextField("Toggle Motor", daiScript._toggleMotor);
                daiScript._toggleCameraMode = EditorGUILayout.TextField("Change Camera Mode", daiScript._toggleCameraMode);
                daiScript._toggleCameraGyro = EditorGUILayout.TextField("Toggle Camera Gyro", daiScript._toggleCameraGyro);
                daiScript._toggleFollowMode = EditorGUILayout.TextField("Change Follow Mode", daiScript._toggleFollowMode);
                daiScript._cameraFreeLook = EditorGUILayout.TextField("Toggle FreeLook", daiScript._cameraFreeLook);
                daiScript._toggleHeadless = EditorGUILayout.TextField("Toggle Headless Mode", daiScript._toggleHeadless);
            } else {
                daiScript.UpdateInput();
                EditorGUILayout.LabelField("Input Axis", EditorStyles.boldLabel);
                EditorGUI.BeginDisabledGroup(true);
                daiScript.forwardBackward = EditorGUILayout.TextField("Forward & Backward", daiScript.forwardBackward);
                daiScript.strafeLeftRight = EditorGUILayout.TextField("Strafe Left & Right", daiScript.strafeLeftRight);
                daiScript.riseLower = EditorGUILayout.TextField("Rise & Lower", daiScript.riseLower);
                daiScript.turn = EditorGUILayout.TextField("Turn", daiScript.turn);
                GUILayout.Space(10f);
                daiScript.cameraRiseLower = EditorGUILayout.TextField("Camera Rise & Lower", daiScript.cameraRiseLower);
                daiScript.cameraTurn = EditorGUILayout.TextField("Camera Turn", daiScript.cameraTurn);
                daiScript.cameraTilt = EditorGUILayout.TextField("Camera Tilt (FPV Only)", daiScript.cameraTilt);
                EditorGUI.EndDisabledGroup();
                GUILayout.Space(10f);
                EditorGUILayout.LabelField("Input Axis / Button / Keycode", EditorStyles.boldLabel);
                EditorGUI.BeginDisabledGroup(true);
                daiScript.toggleMotor = EditorGUILayout.TextField("Toggle Motor", daiScript.toggleMotor);
                daiScript.toggleCameraMode = EditorGUILayout.TextField("Change Camera Mode", daiScript.toggleCameraMode);
                daiScript.toggleCameraGyro = EditorGUILayout.TextField("Toggle Camera Gyro", daiScript.toggleCameraGyro);
                daiScript.toggleFollowMode = EditorGUILayout.TextField("Change Follow Mode", daiScript.toggleFollowMode);
                daiScript.cameraFreeLook = EditorGUILayout.TextField("Toggle FreeLook", daiScript.cameraFreeLook);
                daiScript.toggleHeadless = EditorGUILayout.TextField("Toggle Headless Mode", daiScript.toggleHeadless);
                EditorGUI.EndDisabledGroup();
            }
            #endregion

            #region finalize editor changes
            if (GUI.changed) {
                serializedObject.ApplyModifiedProperties();
                EditorUtility.SetDirty(daiScript);
                EditorUtility.SetDirty(daiScript.gameObject);
            }
            #endregion
        }
    }
}