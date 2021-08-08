#include<stdio.h>
#define cube(x) (x*x*x)
void main()
{
    int a;
    printf("Enter the Value for Cube Calculation: ");
    scanf("%d",&a);
    printf("%d",cube(a));
}
