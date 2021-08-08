#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("arr: %d %d\n",i,j);
        }
    }
    return 0;
}
