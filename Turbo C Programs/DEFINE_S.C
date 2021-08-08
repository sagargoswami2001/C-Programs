#include<stdio.h>
#include<conio.h>
#define SPHERE (1.33*3.14*r*r*r)
void main()
{
float r;
clrscr();
printf("Enter the Value of r: ");
scanf("%f",&r);
printf("Value of Sphere is %f.",SPHERE);
getch();
}