#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("\nInput the No. 10 Times:\n");
for(i=0;i<10;i++)
{
scanf("%d",&n);
if(n<0)
{
continue;
}
sum+=n;
}
printf("\nThe Sum is %d",sum);
getch();
}