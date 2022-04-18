using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PluginInit : MonoBehaviour
{
    AndroidJavaClass unityClass;
    AndroidJavaObject unityactivity;
    AndroidJavaObject _pluginInstance;
    // Start is called before the first frame update
    void Start()
    {
        InitializePlugin("com.example.plugin.Plugin");
    }

    // Update is called once per frame
    void Update()
    {

    }

    void InitializePlugin(string pluginName)
    {
        unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        unityactivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
        _pluginInstance = new AndroidJavaObject(pluginName);
        if (_pluginInstance == null)
        {
            Debug.Log("Plugin instance Error");
        }

        Debug.Log("Plugin instance created");

        //_pluginInstance.Call("receiveUnityActivity", unityactivity);
        _pluginInstance.CallStatic("receiveUnityActivity", unityactivity);
    }

    /* public void GroundSDKInitialize()
    {
        if (_pluginInstance != null)
        {
            var result = _pluginInstance.Call<string>("initialize");
        }
        InitializeUnityPlugin("com.groundsdk.GroundSDK");
    } */

    public void Add()
    {
        if (_pluginInstance != null)
        {
            var result = _pluginInstance.Call<int>("Add", 5, 6);
            Debug.Log("Add result: " + result);
        }
        else
        {
            Debug.Log("Plugin instance Error");
        }
    }

    public void Substract()
    {
        if (_pluginInstance != null)
        {
            var result = _pluginInstance.Call<int>("Subtract", 20, 6);
            Debug.Log("Substract result: " + result);
        }
        else
        {
            Debug.Log("Plugin instance Error");
        }
    }

    public void Toast()
    {
        if (_pluginInstance != null)
        {
            _pluginInstance.Call("Toast", "Hello from Unity");
        }
        else
        {
            Debug.Log("Plugin instance Error");
        }
    }
}
