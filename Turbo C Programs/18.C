#include<stdio.h>
#include<conio.h>
int a,b,sum,minus,multi,div;
void main()
{
clrscr();
printf("\nEnter Value of A:");
scanf("%d",&a);
printf("\nEnter Value of B:");
scanf("%d",&b);
sum=a+b;
printf("\nAddition:%d",sum);
minus=a-b;
printf("\nSubtract:%d",minus);
multi=a*b;
printf("\nMultiple:%d",multi);
div=a/b;
printf("\nDivide:%d",div);
getch();
}