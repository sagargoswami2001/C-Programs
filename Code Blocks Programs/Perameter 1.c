#include<stdio.h>
int square(int a);
void main()
{
    int a,b;
    printf("Enter the Value to be Square: ");
    scanf("%d",&b);
    a=square(b);
    printf("\nThe Square Value if %d",a);
}

int square(int a)
{
    return a*a;
}
