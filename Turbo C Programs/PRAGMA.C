#include<stdio.h>
#include<conio.h>
float AreaT(int b,int a)
{
float total;
total=(.5*b*a);
return total;
}
int AreaR(int l,int b)
{
float cal;
cal=l*b;
return cal;
}
void main()
{
clrscr();
printf("Inside Main Function");
printf("\nArea of Triangle:%f\n",AreaT(4,5));
printf("Arae of Rectangle:%d",AreaR(34,35));
getch();
}