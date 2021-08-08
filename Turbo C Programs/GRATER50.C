#include<stdio.h>
#include<conio.h>
void main()
{
int k=10;
clrscr();
for(;;)
{
printf("\n%d",k++);
if(k>50)
break;
}
getch();
}