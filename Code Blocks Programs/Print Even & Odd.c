//Program to print even and odd no. separately from an array.
#include<stdio.h>
int main()
{
    int n, a[20];
    printf("Enter the Size of the Array: ");
    scanf("%d",&n);
    printf("\nEnter Array Elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEven Numbers in the Array Are:\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            printf("%d ", a[i]);
    }
    printf("\nOdd Numbers in the Array Are:\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            printf("%d ",a[i]);
    }
    return 0;
}
