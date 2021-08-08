#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define ac(r) pi*r*r*r
void main()
{
int r;
clrscr();
printf("Enter the Radius: ");
scanf("%d",&r);
printf("Area of Circle is: %f",ac(r));
getch();
}
