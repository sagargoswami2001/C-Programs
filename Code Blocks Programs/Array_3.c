//WAP to count the number of even and odd elements in an array.
#include<stdio.h>
int main()
{
    int arr[10],odd_no=0,even_no=0,i;
    printf("Enter Array Elements:\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
        for(i=0;i<10;i++)
        {
            if(arr[i]%2==1)
                odd_no++;
            else
                even_no++;
        }
        printf("\nTotal Odd No:%d\nTotal Even No:%d\n",odd_no,even_no);
        return 0;
}
