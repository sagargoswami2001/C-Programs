#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
{
int n1,n2;
clrscr();
printf("\nEnter the First No.");
scanf("%d",&n1);
printf("\nEnter the Second No.");
scanf("%d",&n2);
sum(n1,n2);
getch();
}
void sum(a,b)
int a,b;
{
int sum;
sum=a+b;
printf("\nThe Sum of Two No. is %d",sum);
}