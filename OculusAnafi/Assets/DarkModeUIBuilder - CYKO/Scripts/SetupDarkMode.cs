using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetupDarkMode : MonoBehaviour
{
    [SerializeField] List<ComponentWithColor> colorComponents1; // Assign Text or Image component (ImageContainer.cs or TexContainer.cs) in Inspector for Color 1
    [SerializeField] List<ComponentWithColor> colorComponents2; // Assign Text or Image component (ImageContainer.cs or TexContainer.cs) in Inspector for Color 2
    [SerializeField] List<ComponentWithColor> colorComponents3; // Assign Text or Image component (ImageContainer.cs or TexContainer.cs) in Inspector for Color 3

    // Set all colors in Inspector, 3 color for dark mode, (Images or Text), Opposite to Light Mode Color
    [SerializeField] Color darkColor1; // Assign Dark color
    [SerializeField] Color darkColor2; // Assign Meduim color
    [SerializeField] Color darkColor3; // Assign Light Color

    // Set all colors in Inspector, 3 color for lite mode, (Images or Text), Opposite to Dark Mode Color
    [SerializeField] Color lightColor1; // Assign Light Color
    [SerializeField] Color lightColor2; // Assign Meduim color
    [SerializeField] Color lightColor3; // Assign Dark color

    public void Dark() // Call it from a Button
    {
        foreach (ComponentWithColor component1 in colorComponents1)
        {
            component1.ChangeColor(darkColor1);
        }

        foreach (ComponentWithColor component2 in colorComponents2)
        {
            component2.ChangeColor(darkColor2);
        }

        foreach (ComponentWithColor component3 in colorComponents3)
        {
            component3.ChangeColor(darkColor3);
        }
    }

    public void Light() // Call it from a Button
    {
        foreach (ComponentWithColor component4 in colorComponents1)
        {
            component4.ChangeColor(lightColor1);
        }

        foreach (ComponentWithColor component5 in colorComponents2)
        {
            component5.ChangeColor(lightColor2);
        }

        foreach (ComponentWithColor component6 in colorComponents3)
        {
            component6.ChangeColor(lightColor3);
        }
    }
}