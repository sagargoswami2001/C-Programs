#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("Enter Elements in Array:\n");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
printf("Array Elements:");
for(i=0;i<=4;i++)
{
printf("%d.",a[i]);
}
getch();
}