#include<stdio.h>
#include<conio.h>
#define test if(x>y)
void main()
{
int x,y;
clrscr();
x=40;
y=20;
test
{
printf("%d",x);
}
else
printf("%d",y);
getch();
}