#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j;
    printf("Enter Array Values:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]=%d\t",i,j,a[i][j]);
        }
        printf("\n");
    }
}
