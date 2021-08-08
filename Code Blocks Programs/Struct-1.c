/*Write a program to add two distances in inch-feet using structure. the values of the distances is
to be taken from the user.*/
#include<stdio.h>
typedef struct
{
    int feet;
    int inch;
}
distance;
distance dt;
distance add(distance d1, distance d2)
{
    dt.inch=d1.inch+d2.inch;
    dt.feet=d1.feet+d2.feet;
    return dt;
}

void main()
{
    distance di,dj,dk;
    printf("Enter the feet and inch for Ist distance:\n");
    scanf("%d%d",&di.feet,&di.inch);
    printf("\nEnter the feet and inch for IInd distance:\n");
    scanf("%d%d",&dj.feet,&dj.inch);
    dk=add(di,dj);
    printf("\nTotal Feet:%d",dk.feet);
    printf("\nTotal Inches:%d",dk.inch);
}
