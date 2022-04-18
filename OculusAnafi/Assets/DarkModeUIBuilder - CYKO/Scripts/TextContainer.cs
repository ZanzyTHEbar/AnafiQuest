using UnityEngine;
using UnityEngine.UI;
//using TMPro; 

// Put this on whatever you are using for Text and link it up
public class TextContainer : ComponentWithColor
{
    public override void ChangeColor(Color color)
    {
        gameObject.GetComponent<Text>().color = color;

        //gameObject.GetComponent<TMP_Text>().color = color; // For TextMesh Pro
    }
}