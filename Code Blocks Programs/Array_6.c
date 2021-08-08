#include<stdio.h>
int main()
{
    int n,i,j,temp;
    int arr[10];
    printf("Enter Number of Elements:\n");
    scanf("%d", &n);
    printf("\nEnter %d Integers:\n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 1; i <= n - 1; i++)
    {
        j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    printf("\nSorted List in Ascending Order:\n");
    for(i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
