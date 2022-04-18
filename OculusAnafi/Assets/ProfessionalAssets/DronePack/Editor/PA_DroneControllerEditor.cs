using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace PA_DronePack
{
    [CustomEditor(typeof(PA_DroneController))]
    [CanEditMultipleObjects]
    public class PA_DroneControllerEditor : Editor
    {
        #region varibles
        PA_DroneController dcoScript;
        #endregion

        public void OnEnable()
        {
            #region targets
            dcoScript = (PA_DroneController)target;
            #endregion
        }

        public override void OnInspectorGUI()
        {
            #region Edit Script
            GUI.enabled = false;
            EditorGUILayout.ObjectField("Script", MonoScript.FromMonoBehaviour(dcoScript), typeof(PA_DroneController), false);
            GUI.enabled = true;
            #endregion

            #region Movement
            EditorGUILayout.LabelField("Movement Values", EditorStyles.boldLabel);

            dcoScript.forwardSpeed = EditorGUILayout.FloatField(new GUIContent("Forward Speed", "sets the drone's max forward speed"), dcoScript.forwardSpeed);
            dcoScript.backwardSpeed = EditorGUILayout.FloatField(new GUIContent("Backward Speed", "sets the drone's max backward speed"), dcoScript.backwardSpeed);
            GUILayout.Space(10f);

            dcoScript.rightSpeed = EditorGUILayout.FloatField(new GUIContent("Strafe Right Speed", "sets the drone's max right strafe speed"), dcoScript.rightSpeed);
            dcoScript.leftSpeed = EditorGUILayout.FloatField(new GUIContent("Strafe Left Speed", "sets the drone's max left strafe speed"), dcoScript.leftSpeed);
            GUILayout.Space(10f);

            dcoScript.riseSpeed = EditorGUILayout.FloatField(new GUIContent("Height Rise Speed", "sets the drone's max rise speed"), dcoScript.riseSpeed);
            dcoScript.lowerSpeed = EditorGUILayout.FloatField(new GUIContent("Height Lower Speed", "sets the drone's max lower speed"), dcoScript.lowerSpeed);
            GUILayout.Space(10f);

            dcoScript.acceleration = EditorGUILayout.Slider(new GUIContent("Acceleration", "how fast the drone speeds up"), dcoScript.acceleration, 0.1f, 1f);
            dcoScript.deceleration = EditorGUILayout.Slider(new GUIContent("Deceleration", "how fast the drone slows down"), dcoScript.deceleration, 0.1f, 1f);
            dcoScript.stability = EditorGUILayout.Slider(new GUIContent("Stability", "how eaisly the drone is affected by outside forces"), dcoScript.stability, 0f, 1f);
            dcoScript.turnSensitivty = EditorGUILayout.Slider(new GUIContent("Turn Sensitivity", "how fast the drone rotates"), dcoScript.turnSensitivty, 0.1f, 5f);
            GUILayout.Space(10f);

            dcoScript.motorOn = EditorGUILayout.Toggle(new GUIContent("Is Motor On?", "states whether or not the drone active on start"), dcoScript.motorOn);
            dcoScript.headless = EditorGUILayout.Toggle(new GUIContent("Use Headless Mode?", "makes the drone move relative to an external compass"), dcoScript.headless);
            if (dcoScript.headless) {
                dcoScript.compass = EditorGUILayout.ObjectField(new GUIContent("Headless Compass", "the external compass used to control the drone's flight direction"), dcoScript.compass, typeof(Transform), true) as Transform;
            } else {
                GUILayout.Space(18f);
            }
            GUILayout.Space(10f);
            #endregion

            #region Apperance
            EditorGUILayout.LabelField("Appearance", EditorStyles.boldLabel);

            SerializedProperty propellers = serializedObject.FindProperty("propellers");
            EditorGUILayout.PropertyField(propellers, true);
            SerializedProperty propSpinSpeed = serializedObject.FindProperty("propSpinSpeed");
            EditorGUILayout.PropertyField(propSpinSpeed);
            SerializedProperty propStopSpeed = serializedObject.FindProperty("propStopSpeed");
            EditorGUILayout.PropertyField(propStopSpeed);
            if (dcoScript.headless) {
                EditorGUI.BeginDisabledGroup(true);
                EditorGUILayout.TextField(new GUIContent("Front Tilt", "tilt points disabled in headless mode"), "Tilt Points disabled in Headless mode...");
                EditorGUILayout.TextField(new GUIContent("Back Tilt", "tilt points disabled in headless mode"), "...");
                EditorGUILayout.TextField(new GUIContent("Right Tilt", "tilt points disabled in headless mode"), "...");
                EditorGUILayout.TextField(new GUIContent("Left Tilt", "tilt points disabled in headless mode"), "...");
                EditorGUI.EndDisabledGroup();
            } else {
                SerializedProperty frontTilt = serializedObject.FindProperty("frontTilt");
                EditorGUILayout.PropertyField(frontTilt);
                SerializedProperty backTilt = serializedObject.FindProperty("backTilt");
                EditorGUILayout.PropertyField(backTilt);
                SerializedProperty rightTilt = serializedObject.FindProperty("rightTilt");
                EditorGUILayout.PropertyField(rightTilt);
                SerializedProperty leftTilt = serializedObject.FindProperty("leftTilt");
                EditorGUILayout.PropertyField(leftTilt);
            }
            GUILayout.Space(10f);
            #endregion

            #region Collision Settings
            EditorGUILayout.LabelField("Collision Settings", EditorStyles.boldLabel);
            dcoScript.fallAfterCollision = EditorGUILayout.Toggle(new GUIContent("Fall After Collision?", "set whether or not the drone falls after a large impact"), dcoScript.fallAfterCollision);
            SerializedProperty fallMinimumForce = serializedObject.FindProperty("fallMinimumForce");
            EditorGUILayout.PropertyField(fallMinimumForce);
            SerializedProperty sparkMinimumForce = serializedObject.FindProperty("sparkMinimumForce");
            EditorGUILayout.PropertyField(sparkMinimumForce);
            SerializedProperty sparkPrefab = serializedObject.FindProperty("sparkPrefab");
            EditorGUILayout.PropertyField(sparkPrefab);
            GUILayout.Space(10f);
            #endregion

            #region Sound effects
            EditorGUILayout.LabelField("Sound Effects", EditorStyles.boldLabel);
            SerializedProperty flyingSound = serializedObject.FindProperty("flyingSound");
            EditorGUILayout.PropertyField(flyingSound);
            SerializedProperty sparkSound = serializedObject.FindProperty("sparkSound");
            EditorGUILayout.PropertyField(sparkSound);
            GUILayout.Space(10f);
            #endregion

            #region Read Only variables
            EditorGUI.BeginDisabledGroup(true);
            EditorGUILayout.LabelField("Read Only Variables", EditorStyles.boldLabel);
            SerializedProperty collisionMagnitude = serializedObject.FindProperty("collisionMagnitude");
            EditorGUILayout.PropertyField(collisionMagnitude);
            SerializedProperty liftForce = serializedObject.FindProperty("liftForce");
            EditorGUILayout.PropertyField(liftForce);
            SerializedProperty driveForce = serializedObject.FindProperty("driveForce");
            EditorGUILayout.PropertyField(driveForce);
            SerializedProperty strafeForce = serializedObject.FindProperty("strafeForce");
            EditorGUILayout.PropertyField(strafeForce);
            SerializedProperty turnForce = serializedObject.FindProperty("turnForce");
            EditorGUILayout.PropertyField(turnForce);
            SerializedProperty groundDistance = serializedObject.FindProperty("groundDistance");
            EditorGUILayout.PropertyField(groundDistance);
            SerializedProperty uprightAngleDistance = serializedObject.FindProperty("uprightAngleDistance");
            EditorGUILayout.PropertyField(uprightAngleDistance);
            SerializedProperty calPropSpeed = serializedObject.FindProperty("calPropSpeed");
            EditorGUILayout.PropertyField(calPropSpeed);
            SerializedProperty startPosition = serializedObject.FindProperty("startPosition");
            EditorGUILayout.PropertyField(startPosition);
            SerializedProperty startRotation = serializedObject.FindProperty("startRotation");
            EditorGUILayout.PropertyField(startRotation, true);
            EditorGUI.EndDisabledGroup();
            #endregion

            #region finalize editor changes
            if (GUI.changed) {
                serializedObject.ApplyModifiedProperties();
                EditorUtility.SetDirty(dcoScript);
                EditorUtility.SetDirty(dcoScript.gameObject);
            }
            #endregion
        }
    }
}