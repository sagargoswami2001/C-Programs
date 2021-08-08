//c Program to put a no. in a specific Array Index and Shift Rest of Array Forward.
#include<stdio.h>
void main()
{
    int i,a[5],no,pos;
    printf("Enter Values in Array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray Values:");
    for(i=0;i<5;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\nEnter Position Number:");
    scanf("%d", &pos);
    if(pos>5)
    {
        printf("\nOut of Range:");
    }
    else
    {
        printf("\nEnter New Value:");
        scanf("%d", &no);
        --pos;
        for(i=5;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=no;
        printf("\nNew Array Values:");
        for(i=0;i<6;i++)
        {
            printf(" %d", a[i]);
        }
    }
}
