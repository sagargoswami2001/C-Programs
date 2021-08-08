//WAP which input 20 numbers and only print the sum of odd numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
clrscr();
printf("\n Enter the Number upto 20 times:");
for(i=0;i<20;i++)
{
scanf("%d",&n);
if(n%2==0)
{
continue;
}
sum=sum+n;
}
printf("\n The Sum of ODD Number is %d",sum);
getch();
}