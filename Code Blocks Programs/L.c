#include<stdio.h>
void sum(int a, int b)//formal Arguments //Parameters //input
{
    int c=a+b;
    printf("%d",c);
}

void main()
{
    sum(45,67);//Actual Arguments
    sum(677,3445);
}
