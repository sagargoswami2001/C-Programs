//Print Largest Number.
#include<stdio.h>
int largest(int a, int b, int c);
void main()
{
    int a,b,c,max;
    printf("Enter Any Three No:\n");
    scanf("%d %d %d", &a,&b,&c);
    max = largest(a,b,c);
    printf("\nLargest No: %d", max);
}

int largest(int a, int b, int c)
{
    int max;
    if(a>b && a>c)
        max = a;
    if(b>a && b>c)
        max = b;
    if(c>a && c>b)
        max = c;
    return max;
}
