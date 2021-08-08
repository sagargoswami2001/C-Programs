#include<stdio.h>
#include<conio.h>
void main()
{
int askyear;
clrscr();
printf("Enter the Year:");
scanf("%d",&askyear);
if(leapyear(askyear))
printf("\nThe %d is a Leap Year",askyear);
else
printf("\nThe %d is not a Leap Year",askyear);
getch();
}
leapyear(sentyear)
int sentyear;
{
return(sentyear%4==0);
}