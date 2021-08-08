//WAP To Find The Area of a Circle.
//Formula=3.14*R*R.
#include<stdio.h>
int main()
{
    int r;
    float pi=3.14,area;
    printf("Enter The Radius of Circle:");
    scanf("%d",&r);
    area=pi*r*r;
    printf("\nArea of Circle:%f\n",area);
}
