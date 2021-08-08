#include<stdio.h>
void main()
{
    int i=0,n=0,sum=0;
    table:
        printf("Enter 1st Positive int Values:");
        scanf("%d",&i);
        printf("Enter 2nd Positive int Values:");
        scanf("%d",&n);
        sum=i+n;
        if(sum<0)
        {
            goto table;
        }
        printf("%d\n",sum);
}
