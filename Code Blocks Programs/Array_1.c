//WAP to enter 10 elements in an array and print smallest among them.
#include<stdio.h>
int main()
{
    int a[10],i,smallest;
    printf("Enter Elements of Array:\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    smallest=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("\nSmallest Element:%d",smallest);
    return 0;
}
