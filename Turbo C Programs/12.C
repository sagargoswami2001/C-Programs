#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
for(a=1;a<=5;a++)
{
printf("\nThe Current Value of a is %d\n",a);
for(b=1;b<=15;b++)
{
printf("\nThe Current Value of b is %d\n",b);
}
printf("\n");
}
printf("\nEnd of Loop...");
getch();
}