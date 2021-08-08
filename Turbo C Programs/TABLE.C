#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,t;
clrscr();
printf("Enter a Number is:");
scanf("%d",&n);
printf("\nPrinting Table:-");
while(i<=10)
{
t=n*i;
printf("\n%d",t);
i++;
}
printf("\nExit From Loop...");
getch();
}