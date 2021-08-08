/*The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print this distance in meters,feet,inches and centimeters.*/
#include<stdio.h>
int main()
{
    float km, m, cm, f, in;
    printf("Enter Distance in Kilometers:");
    scanf("%f", &km);
    //Calculate the Conversion.
    m = km * 1000;
    cm = km * 1000 * 100;
    f = km * 3280.84;
    in = km * 39370.08;
    printf("The Distance in Feet: %f\n", f);
    printf("The Distance in Inches: %f\n", in);
    printf("The Distance in Meters: %f\n", cm);
    printf("The Distance in Centimeters: %f\n", cm);
    return (0);
}
