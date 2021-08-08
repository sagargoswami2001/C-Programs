#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
int r;
float area;
clrscr();
printf("Enter the Radius:\n");
scanf("%d",&r);
area=pi*(r*r);
printf("The Area of Circle is: %f\n",area);
getch();
}