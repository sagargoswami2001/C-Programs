#include<stdio.h>
#include<conio.h>
void main()
{
int id;
float per,sa;
clrscr();
printf("Enter Student Id:");
scanf("%d",&id);
printf("Enter Student's Percentage:");
scanf("%f",&per);
if(per>=90)
{
sa=100000+(1000*per);
printf("Scholarship Amount:%f",sa);
}
else
if(per>70&&per<90)
{
sa=50000+(500*per);
printf("Scholarship Amount:%f",sa);
}
else
if(per>=60&&per<70)
{
sa=10000+(100*per);
printf("Scholarship Amount:%f",sa);
}
else
if(per<60)
printf("No Scholarship");
getch();
}