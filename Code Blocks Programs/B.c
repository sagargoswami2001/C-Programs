#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the Number of Rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}
