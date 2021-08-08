#include<stdio.h>
#define vol(r) (4/3)*(3.14*r*r*r)

void main()
{
    int r;
    printf("Enter Radius: ");
    scanf("%d",&r);
    printf("Volume of the Sphere: %f\n",vol(r));
}
