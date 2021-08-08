#include<stdio.h>
#include<conio.h>
void main()
{
int num,ctr=1;
clrscr();
printf("Enter the Number You Want to Generate the Table of: ");
scanf("%d",&num);
printf("\n\n\t\tPrinting Table\n\n");
do
{
printf("%d\t*\t%d\t=\t%d\n",num,ctr,num*ctr);
ctr++;
}
while(ctr<=10);
getch();
}