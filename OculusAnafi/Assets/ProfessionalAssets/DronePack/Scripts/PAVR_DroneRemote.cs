using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

namespace PA_DronePack
{
    public class PAVR_DroneRemote : MonoBehaviour
    {
        [SerializeField]
        private XRNode _droneRemoteHand;

        [SerializeField]

        List<XRNodeState> nodes = new List<XRNodeState>();
        Vector3 HandPos;
        Quaternion HandRot;

        void Update()
        {
            InputTracking.GetNodeStates(nodes);
            foreach (XRNodeState node in nodes)
            {
                if (node.nodeType == _droneRemoteHand)
                {
                    node.TryGetPosition(out HandPos);
                    node.TryGetRotation(out HandRot);
                }
            }
            transform.localPosition = HandPos;
            transform.localRotation = HandRot;
        }
    }
}