//WAP to enter 10 elements in an array and print largest among them.
#include<stdio.h>
int main()
{
    int a[10],i,largest;
    printf("Enter Elements of Array:\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    largest=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("\nLargest Element:%d",largest);
    return 0;
}
