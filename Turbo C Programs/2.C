#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("Enter a Number:");
scanf("%d",&number);
if(number%3==0)
printf("Number is Divisible by 3");
else
printf("Number is Not Divisible by 3");
getch();
}