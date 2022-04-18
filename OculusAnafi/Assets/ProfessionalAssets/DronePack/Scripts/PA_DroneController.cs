using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace PA_DronePack
{
    public class PA_DroneController : MonoBehaviour
    {
        #region Movement Values
        [Tooltip("sets the drone's max forward speed")]
        public float forwardSpeed = 7f;
        [Tooltip("sets the drone's max backward speed")]
        public float backwardSpeed = 5f;
        [Tooltip("sets the drone's max left strafe speed")]
        public float rightSpeed = 5f;
        [Tooltip("sets the drone's max right strafe speed")]
        public float leftSpeed = 5f;
        [Tooltip("sets the drone's max rise speed")]
        public float riseSpeed = 5f;
        [Tooltip("sets the drone's max lower speed")]
        public float lowerSpeed = 5f;
        [Tooltip("how fast the drone speeds up")]
        public float acceleration = 0.5f;
        [Tooltip("how fast the drone slows down")]
        public float deceleration = 0.2f;
        [Tooltip("how eaisly the drone is affected by outside forces")]
        public float stability = 0.1f;
        [Tooltip("how fast the drone rotates")]
        public float turnSensitivty = 2f;

        [Tooltip("states whether or not the drone active on start")]
        public bool motorOn = true;
        [Tooltip("makes the drone move relative to an external compass")]
        public bool headless = false;
        [Tooltip("the external compass used to control the drone's flight direction")]
        public Transform compass;
        #endregion

        #region Appearance
        [Tooltip("assign drone's propellers to this array")]
        public List<GameObject> propellers;
        [Tooltip("set propellers max spin speed")]
        public float propSpinSpeed = 50;
        [Range(0, 1f)]
        [Tooltip("how fast the propellers slow down")]
        public float propStopSpeed = 1f;
        [Tooltip("the transform/location used to tilt the drone forward")]
        public Transform frontTilt;
        [Tooltip("the transform/location used to tilt the drone backward")]
        public Transform backTilt;
        [Tooltip("the transform/location used to tilt the drone right")]
        public Transform rightTilt;
        [Tooltip("the transform/location used to tilt the drone left")]
        public Transform leftTilt;
        #endregion

        #region Collision Settings
        [Tooltip("set whether or not the drone falls after a large impact")]
        public bool fallAfterCollision = true;
        [Tooltip("sets the min. collision force used to drop the drone")]
        public float fallMinimumForce = 6f;
        [Tooltip("sets the min. collision force used to create a spark")]
        public float sparkMinimumForce = 1f;
        [Tooltip("the spark particle/object spawned on a collision")]
        public GameObject sparkPrefab;
        #endregion

        #region Sound Effects
        [Tooltip("audio clip played during flight")]
        public AudioSource flyingSound;
        [Tooltip("audio clip played on collision")]
        public AudioSource sparkSound;
        #endregion

        #region Read Only Variables
        [Tooltip("displays the collision force of the last impact")]
        public float collisionMagnitude;
        [Tooltip("displays the current force lifting up the drone")]
        public float liftForce;
        [Tooltip("displays the current force driving the drone")]
        public float driveForce;
        [Tooltip("displays the current force strafing the drone")]
        public float strafeForce;
        [Tooltip("displays the current force turning the drone")]
        public float turnForce;
        [Tooltip("displays the drone's distance from the ground")]
        public float groundDistance = Mathf.Infinity;
        [Tooltip("displays the drones distance from being upright")]
        public float uprightAngleDistance;
        [Tooltip("displays the current propeller speed")]
        public float calPropSpeed = 0;
        [Tooltip("displays drone's starting position")]
        public Vector3 startPosition;
        [Tooltip("displays the drone's rotational position")]
        public Quaternion startRotation;
        #endregion

        #region Private Functions
        private float driveInput = 0;
        private float strafeInput = 0;
        private float liftInput = 0;
        public Rigidbody rigidBody;
        private RaycastHit hit;
        private Collider coll;
        private bool oGrav;
        private float oDrag;
        private float oADrag;
        #endregion

        void Awake()
        {
            #region Cache Components & Start Values
            coll = GetComponent<Collider>();        // store the drone's collider
            rigidBody = GetComponent<Rigidbody>();  // store the drone's rigidbody
            startPosition = transform.position;     // store the drone's start position
            startRotation = transform.rotation;     // store the drone's rotation
            oGrav = rigidBody.useGravity;           // store the drone's rigidbody gravity settings
            oDrag = rigidBody.drag;                 // store the drone's rigidbody drag settings
            oADrag = rigidBody.angularDrag;         // store the drone's rigidbody angular drag settings
            #endregion
        }

        private void Start()
        {
            #region errorcheck
            if (headless && !compass)                                                                                    // if headless mode is being used and a compass has NOT been assigned
            {                                                                                                            //
                Debug.LogError("no headless compassed assinged! please asign a compass in order to use headless mode!"); // send an error msg
                headless = false;                                                                                        // turn headless mode off
            }
            #endregion
        }

        void Update()
        {
            #region Float Calculations, Propellers, SoundFX
            uprightAngleDistance = (1f - transform.up.y) * 0.5f;                                                               // the upright angle is measured as the drone's distance from facing upwards
            uprightAngleDistance = (uprightAngleDistance < 0.001) ? 0f : uprightAngleDistance;                                  // round out upright angle when the value is less than 0.001
            if (Physics.Raycast(transform.position, Vector3.down, out hit, Mathf.Infinity)) { groundDistance = hit.distance; }  // measure the distance of the drone from the ground/solid object
            calPropSpeed = (motorOn) ? propSpinSpeed : calPropSpeed * (1f - (propStopSpeed / 2));                               // calculate the speed the propellers should rotate
            foreach (GameObject propeller in propellers) { propeller.transform.Rotate(0, 0, calPropSpeed); }                    // rotate the propellers
            if (flyingSound)                                                                                                    // if we've assigned a spark sound... 
            {                                                                                                                   // 
                flyingSound.volume = (calPropSpeed / propSpinSpeed);                                                            // increase the volume by the propeller speed
                flyingSound.pitch = 1 + (liftForce * 0.02f);                                                                    // alter the pitch according to lift input
            }
            #endregion
        }

        void FixedUpdate()
        {
            #region Physics Calculations, Rigidbody Movement, SoundFX
            if (motorOn)  // if the drone's motor is on...
            {
                rigidBody.useGravity = false;  // disable the rigidbody's gravity during flight
                rigidBody.drag = 0;            // lower the rigidbody's drag during flight
                rigidBody.angularDrag = 0;     // lower the rigidbody's angular drag during flight

                if (headless)                                                                                                                                                                          // if using headless mode...
                {                                                                                                                                                                                      //
                    if (!compass)                                                                                                                                                                      // check if compass has NOT been assigned
                    {                                                                                                                                                                                  //
                        Debug.LogError("no headless compassed assinged! please asign a compass in order to use headless mode!");                                                                       // send an error msg
                        headless = false;                                                                                                                                                              // turn headless mode off
                    }                                                                                                                                                                                  //
                    if (groundDistance > 0.2f)                                                                                                                                                         // if we're NOT too close to the ground...
                    {                                                                                                                                                                                  //
                        if (driveInput != 0 || strafeInput != 0) { rigidBody.AddForceAtPosition(Vector3.down, (rigidBody.position + rigidBody.velocity.normalized * 0.5f), ForceMode.Acceleration); }  // add downward/tilt force in the direction we're moving (tilt points ignored)
                    }

                    Vector3 localVelocity = compass.InverseTransformDirection(rigidBody.velocity);                                                                                         // convert drone's world velocity into the external compass's local space and store it 
                    localVelocity.z = (driveInput != 0) ? Mathf.Lerp(localVelocity.z, driveInput, acceleration * 0.3f) : Mathf.Lerp(localVelocity.z, driveInput, deceleration * 0.2f);     // accelerate/decelerate local velocity's Z axis based on drive input
                    driveForce = (Mathf.Abs(localVelocity.z) > 0.01f) ? localVelocity.z : 0f;                                                                                              // set driveforce equal to local velocity's Z axis if larger than 0.01
                    localVelocity.x = (strafeInput != 0) ? Mathf.Lerp(localVelocity.x, strafeInput, acceleration * 0.3f) : Mathf.Lerp(localVelocity.x, strafeInput, deceleration * 0.2f);  // accelerate/decelerate local velocity's X axis based on strafe input
                    strafeForce = (Mathf.Abs(localVelocity.x) > 0.01f) ? localVelocity.x : 0f;                                                                                             // set strafeforce equal to local velocity's Z axis if larger than 0.01
                    rigidBody.velocity = compass.TransformDirection(localVelocity);                                                                                                        // convert drone's local velocity back into the external compass's world space and apply it
                }
                else                                                                                                                      // if NOT using headless mode...
                {                                                                                                                         //
                    if (groundDistance > 0.2f)                                                                                            // if we're NOT too close to the ground...
                    {                                                                                                                     //
                        if (driveInput > 0) { rigidBody.AddForceAtPosition(Vector3.down * (Mathf.Abs(driveInput) * 0.3f), frontTilt.position, ForceMode.Acceleration); }   // add downward/tilt force onto specified 'tilt points'
                        if (driveInput < 0) { rigidBody.AddForceAtPosition(Vector3.down * (Mathf.Abs(driveInput) * 0.3f), backTilt.position, ForceMode.Acceleration); }    // ...
                        if (strafeInput > 0) { rigidBody.AddForceAtPosition(Vector3.down * (Mathf.Abs(strafeInput) * 0.3f), rightTilt.position, ForceMode.Acceleration); }  // ...
                        if (strafeInput < 0) { rigidBody.AddForceAtPosition(Vector3.down * (Mathf.Abs(strafeInput) * 0.3f), leftTilt.position, ForceMode.Acceleration); }   // ...
                    }

                    Vector3 localVelocity = transform.InverseTransformDirection(rigidBody.velocity);                                                                                       // convert drone's world velocity into local velocity and store it 
                    localVelocity.z = (driveInput != 0) ? Mathf.Lerp(localVelocity.z, driveInput, acceleration * 0.3f) : Mathf.Lerp(localVelocity.z, driveInput, deceleration * 0.2f);     // accelerate/decelerate local velocity's Z axis based on drive input
                    driveForce = (Mathf.Abs(localVelocity.z) > 0.01f) ? localVelocity.z : 0f;                                                                                              // set driveforce equal to local velocity's Z axis if larger than 0.01
                    localVelocity.x = (strafeInput != 0) ? Mathf.Lerp(localVelocity.x, strafeInput, acceleration * 0.3f) : Mathf.Lerp(localVelocity.x, strafeInput, deceleration * 0.2f);  // accelerate/decelerate local velocity's X axis based on strafe input
                    strafeForce = (Mathf.Abs(localVelocity.x) > 0.01f) ? localVelocity.x : 0f;                                                                                             // set strafeforce equal to local velocity's Z axis if larger than 0.01
                    rigidBody.velocity = transform.TransformDirection(localVelocity);                                                                                                      // convert drone's local velocity back into world velocity and apply it
                }

                liftForce = (liftInput != 0) ? Mathf.Lerp(liftForce, liftInput, acceleration * 0.2f) : Mathf.Lerp(liftForce, liftInput, deceleration * 0.3f); // accelerate/decelerate the global velocity's Y axis based on liftinput
                liftForce = (Mathf.Abs(liftForce) > 0.01f) ? liftForce : 0f;                                                                                  // set strafeforce equal to local velocity's Z axis if larger than 0.01
                rigidBody.velocity = new Vector3(rigidBody.velocity.x, liftForce, rigidBody.velocity.z);                                                      // apply global velocity's Y axis to global velocity

                rigidBody.angularVelocity *= 1f - Mathf.Clamp(InputMagnitude(), 0.2f, 1.0f) * stability;                       // dampen the drone's angulary velocity based on movement inputs and the stability value
                Quaternion uprightRotation = Quaternion.FromToRotation(transform.up, Vector3.up);                              // generate a new rotation direction that faces upwards (global Y axis)
                rigidBody.AddTorque(new Vector3(uprightRotation.x, 0, uprightRotation.z) * 100f, ForceMode.Acceleration);      // add tourqe (force) in that new rotation's direction to keep the drone upright
                rigidBody.angularVelocity = new Vector3(rigidBody.angularVelocity.x, turnForce, rigidBody.angularVelocity.z);  // afterwards use the turninput to rotate the drone around it's Y axis
            }
            else // if the drone's motor is off...
            {
                rigidBody.useGravity = oGrav;    // reset the rigidbody's gravity
                rigidBody.drag = oDrag;          // reset the rigidbody's drag
                rigidBody.angularDrag = oADrag;  // reset the rigidbody's angular
            }
            #endregion
        }

        void OnCollisionEnter(Collision newObject)
        {
            #region Rigidbody Collisions, SoundFX
            collisionMagnitude = newObject.relativeVelocity.magnitude;                    // record the collision force applied to rigibody's axises
            if (collisionMagnitude > sparkMinimumForce)                                   // if the collision force is greater force than the spark threshold...
            {                                                                             //
                SpawnSparkPrefab(newObject.contacts[0].point);                            // spawn a spark prefab
                if (sparkSound)                                                           // if we've assigned a spark sound... *** NoteToSelf: rename -> "collison sound" ***
                {                                                                         //
                    sparkSound.pitch = collisionMagnitude * 0.1f;                         // alter it's pitch by a fraction of the collison force
                    sparkSound.PlayOneShot(sparkSound.clip, collisionMagnitude * 0.05f);  // play the spark sound and alter it's volume by a fraction of the collison force
                }
            }
            if (collisionMagnitude > fallMinimumForce && fallAfterCollision)  // if the collision force is greater force than the fall threshold...
            {                                                                 //
                motorOn = false;                                              // shut off motor
            }
            #endregion
        }

        void OnCollisionStay(Collision newObject)
        {
            #region Rigidbody Collisions
            if (groundDistance < coll.bounds.extents.y + 0.15f)         // if the drone is in contact with another object that is directly below it...
            {                                                           //
                liftForce = Mathf.Clamp(liftForce, 0, Mathf.Infinity);  // stop the drone from lowering any further (prevents clipping through ground)
            }
            #endregion
        }

        #region Public Functions
        public void ToggleMotor() { motorOn = !motorOn; }
        public void ToggleHeadless() { headless = !headless; }
        public void DriveInput(float input) { if (input > 0) { driveInput = input * forwardSpeed; } else if (input < 0) { driveInput = input * backwardSpeed; } else { driveInput = 0; } }
        public void StrafeInput(float input) { if (input > 0) { strafeInput = input * rightSpeed; } else if (input < 0) { strafeInput = input * leftSpeed; } else { strafeInput = 0; } }
        public void LiftInput(float input) { if (input > 0) { liftInput = input * riseSpeed; motorOn = true; } else if (input < 0) { liftInput = input * lowerSpeed; } else { liftInput = 0; } }
        public void TurnInput(float input) { turnForce = input * turnSensitivty; }
        public void ResetDronePosition() { rigidBody.position = startPosition; rigidBody.rotation = startRotation; rigidBody.velocity = Vector3.zero; }
        public void SpawnSparkPrefab(Vector3 position) { GameObject spark = Instantiate(sparkPrefab, position, Quaternion.identity) as GameObject; ParticleSystem.MainModule ps = spark.GetComponent<ParticleSystem>().main; Destroy(spark, ps.duration + ps.startLifetime.constantMax); }

        public void AdjustLift(float value) { riseSpeed = value; lowerSpeed = value; }
        public void AdjustSpeed(float value) { forwardSpeed = value; backwardSpeed = value; }
        public void AdjustStrafe(float value) { rightSpeed = value; leftSpeed = value; }
        public void AdjustTurn(float value) { turnSensitivty = value; }
        public void AdjustAccel(float value) { acceleration = value; }
        public void AdjustDecel(float value) { deceleration = value; }
        public void AdjustStable(float value) { stability = value; }
        public void ToggleFall(bool state) { fallAfterCollision = !fallAfterCollision; }

        public void ChangeFlightAudio(AudioClip newClip) { flyingSound.clip = newClip; flyingSound.enabled = false; flyingSound.enabled = true; }
        public void ChangeImpactAudio(AudioClip newClip) { sparkSound.clip = newClip; sparkSound.enabled = false; sparkSound.enabled = true; }

        float InputMagnitude() { return (Mathf.Abs(driveInput) + Mathf.Abs(strafeInput) + Mathf.Abs(liftInput)) / 3; }
        #endregion
    }
}