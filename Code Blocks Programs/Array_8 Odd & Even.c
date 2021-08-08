//Even & Odd Array Program...
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],even = 0, odd = 0, i;
    printf("Enter Any 10 Numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d", &arr[i]);
    for(i=0;i<10;i++)
    {
        if(arr[i]%2 == 0)
            even++;
        else
            odd++;
    }
    printf("\nTotal Even Number: %d",even);
    printf("\nTotal Odd Number: %d",odd);
    return 0;
}
