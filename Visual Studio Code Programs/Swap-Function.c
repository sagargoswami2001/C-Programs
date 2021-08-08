#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nThe Swapped Values in Swap Function : %d %d\n",*a,*b);
}

void main()
{
    int i,j;
    printf("Enter Two Values:\n");
    scanf("%d%d",&i,&j);
    swap(&i,&j);
    printf("\nOriginal Values After Swap : %d %d",i,j);
}