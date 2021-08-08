#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,pos,x;
clrscr();
printf("Enter the Array Values:\n");
for(i=0;i<10;i++)
{
scanf("%d",& a[i]);
}
printf("\nEnter the Pos to insert: ");
scanf("%d",& pos);
printf("\nEnter the Value to insert: ");
scanf("%d",& x);
for(i=8;i>=pos;i--)
a[i+1]=a[i];
a[pos]=x;
printf("\nAfter Inserting a Value is: ");
for(i=0;i<10;i++)
printf("%d   ",a[i]);
printf("\n");
getch();
}