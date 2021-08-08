#include<stdio.h>
void main()
{
    int a[5]={1,6,3,2,3};
    int i;
    int *p;
    p=a;
    printf("Enter Array Values:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nDisplaying Array Values\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d\n",i,*p);
        printf("Address=%u\n",i,p);
        p++;
    }
}
