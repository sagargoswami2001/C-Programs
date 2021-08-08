#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int *p1;
int **p2;
int ***p3;
clrscr();
p1=&a;
p2=&p1;
p3=&p2;
printf("\nEnter of A is %d",*p1);
printf("\nAddress of A is %u",p1);
p1++;
printf("\nAddress is %u",p1);
p1--;
printf("\nAddress is %u",p1);
getch();
}