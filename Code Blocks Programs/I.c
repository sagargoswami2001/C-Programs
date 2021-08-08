#include<stdio.h>
int main()
{
    int i,j,rows,k=0;
    printf("Enter the Number of Rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i,k=0)
    {
        for(j=1;j<=rows-i;++j)
        {
            printf(" ");
        }
        while(k != 2 * i - 1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
    }
    return 0;
}
