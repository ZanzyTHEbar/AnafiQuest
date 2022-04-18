using UnityEngine;
using UnityEngine.UI;

// Put this on whatever you are using for images and link it up
public class ImageContainer : ComponentWithColor
{
    public override void ChangeColor(Color color)
    {
        gameObject.GetComponent<Image>().color = color;
    }
}