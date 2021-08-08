#include<stdio.h>
int main()
{
    int num,i,j;
    int r=1;
    char ch='A';
    printf("Enter No. of Rows:");
    scanf("%d", &num);
    printf("\n");
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%c",ch++);
            }
            else
            {
                printf("%d",r++);
            }
        }
        printf("\n");
    }
    return 0;
}
