#include<stdio.h>
void sum(int a,int b)//formal Arguments //Parameters //input
{
    int c=a+b;
    printf("\n%d",c);
}

void main()
{
    int a,b;
    printf("Enter Two Integers:\n");
    scanf("%d%d",&a,&b);
    sum(a,b);//Actual Arguments
}
