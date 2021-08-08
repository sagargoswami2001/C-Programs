#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("Enter a Number:");
scanf("%d",&number);
if(number<0)
{
printf("Negative Number");
}
else
{
printf("Positive Number");
}
getch();
}