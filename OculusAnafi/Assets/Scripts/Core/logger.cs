using System.Collections.Generic;
using PrometheonTechnologies.Core.Singletons;
using System;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class logger : Singleton<logger>
{
    [SerializeField]
    private TextMeshProUGUI debugAreaText = null;

    [SerializeField]
    private bool enableDebug = false;

    [SerializeField]
    private int maxLines = 15;

    Dictionary<string, string> debugLogs = new Dictionary<string, string>();

    void Awake()
    {
        if (debugAreaText == null)
        {
            debugAreaText = GetComponent<TextMeshProUGUI>();
        }
    }

    private void Update()
    {
        Debug.Log("time: " + Time.time);
        Debug.Log(gameObject.name);
    }

    void OnEnable()
    {
        debugAreaText.enabled = enableDebug;
        enabled = enableDebug;

        if (enabled)
        {
            debugAreaText.text = $"<color=\"white\">{DateTime.Now.ToString("HH:mm:ss.fff")} {this.GetType().Name} enabled</color>\n";
            Application.logMessageReceived += HandleLog;
        }
    }

    void OnDisable()
    {
        debugAreaText.enabled = enableDebug;
        enabled = enableDebug;

        if (!enabled)
        {
            debugAreaText.text = $"<color=\"white\">{DateTime.Now.ToString("HH:mm:ss.fff")} {this.GetType().Name} disabled</color>\n";
            Application.logMessageReceived -= HandleLog;
        }
    }

    public void Clear() => debugAreaText.text = string.Empty;

    public void LogInfo(string message)
    {
        ClearLines();

        debugAreaText.text += $"<color=\"green\">{DateTime.Now.ToString("HH:mm:ss.fff")} {message}</color>\n";
    }

    public void LogError(string message)
    {
        ClearLines();
        debugAreaText.text += $"<color=\"red\">{DateTime.Now.ToString("HH:mm:ss.fff")} {message}</color>\n";
    }

    public void LogWarning(string message)
    {
        ClearLines();
        debugAreaText.text += $"<color=\"yellow\">{DateTime.Now.ToString("HH:mm:ss.fff")} {message}</color>\n";
    }

    private void ClearLines()
    {
        if (debugAreaText.text.Split('\n').Count() >= maxLines)
        {
            debugAreaText.text = string.Empty;
        }
    }

    private void HandleLog(string logString, string stackTrace, LogType type)
    {
        ClearLines();
        string[] splitString = logString.Split(char.Parse(":"));
        string debugKey = splitString[0];
        string debugValue = splitString.Length > 1 ? splitString[1] : string.Empty;

        switch (type)
        {
            case LogType.Error:
                if (debugLogs.ContainsKey(debugKey))
                {
                    LogError(debugLogs[debugKey] = debugValue);
                }
                else
                {
                    debugLogs.Add(debugKey, debugValue);
                }
                break;
            case LogType.Exception:
                if (debugLogs.ContainsKey(debugKey))
                {
                    LogError(debugLogs[debugKey] = debugValue);
                }
                else
                {
                    debugLogs.Add(debugKey, debugValue);
                }
                break;
            case LogType.Log:
                if (debugLogs.ContainsKey(debugKey))
                {
                    LogInfo(debugLogs[debugKey] = debugValue);
                }
                else
                {
                    debugLogs.Add(debugKey, debugValue);
                }
                break;
            case LogType.Warning:
                if (debugLogs.ContainsKey(debugKey))
                {
                    LogWarning(debugLogs[debugKey] = debugValue);
                }
                else
                {
                    debugLogs.Add(debugKey, debugValue);
                }
                break;

            case LogType.Assert:
                if (debugLogs.ContainsKey(debugKey))
                {
                    LogError(debugLogs[debugKey] = debugValue);
                }
                else
                {
                    debugLogs.Add(debugKey, debugValue);
                }
                break;

            default:
                if (debugLogs.ContainsKey(debugKey))
                {
                    LogInfo(debugLogs[debugKey] = debugValue);
                }
                else
                {
                    debugLogs.Add(debugKey, debugValue);
                }
                break;
        }

        string displayText = string.Empty;
        foreach (KeyValuePair<string, string> log in debugLogs)
        {
            if (log.Value == string.Empty)
            {
                displayText += $"{log.Key}\n";
            }
            else
            {
                displayText += $"{log.Key}: {log.Value}\n";
            }

        }
        debugAreaText.text = displayText;
    }
}
