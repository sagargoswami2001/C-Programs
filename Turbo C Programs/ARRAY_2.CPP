#include<stdio.h>
#include<conio.h>
int main()
{
int i,sub[5],sum=0;
float ave;
for(i=0;i<5;i++)
{
printf("\nEnter Marks Subject[%d]=",i);
scanf("%d",&sub[i]);
}
for(i=0;i<5;i++)
sum=sum+sub[i];
ave=sum/5;
printf("\nSum is: %d",sum);
printf("\nAverage is: %f",ave);
}


