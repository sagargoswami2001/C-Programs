#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("\nEnter how many rows you want to print:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",i);
}
printf("\n");
}
for(i=n-1;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%d ",i);
}
printf("\n");
}
getch();
}