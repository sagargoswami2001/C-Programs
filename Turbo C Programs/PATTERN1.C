#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("\nEnter how many row you want to print:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
for(j=n;j>=i;j--)
{
printf("* ");
}
printf("\n");
}
getch();
}