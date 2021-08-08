#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter 10 Positive int Values:\n");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&n);
        if(n<0)
        {
            continue;
        }
        if(n>0)
        {
            sum += n;
        }
        }
        printf("\n%d\n",sum);
    }
