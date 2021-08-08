#include<stdio.h>
#include<conio.h>
void main()
{
int x=0,i,j;
clrscr();
printf("Using Comma Operator, For Loop\n");
for(i=0,j=10;i<10,j>0;i=i+2,j--)
{
++x;
printf("The Value of i,j,x is\t%d\t%d\t\n",i,j,x);
}
getch();
}