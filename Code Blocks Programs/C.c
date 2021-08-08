#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter 20 int Values:\n");
    for(i=0;i<=20;i++)
    {
        scanf("%d",&n);
        if(n<0)
        {
        continue;
        }
        if(n%2==1)
        {
            sum +=n;
        }
    }
    printf("\n%d\n",sum);
}
