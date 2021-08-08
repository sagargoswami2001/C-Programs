#include<stdio.h>
#include<conio.h>
struct regist
{
char brname[20],colour[20];
int price,length,breadth,pages;
};

struct regist a;
void main()
{
clrscr();
printf("Enter Brname:");
scanf("%s",a.brname);
printf("Enter Colour:");
scanf("%s",a.colour);
printf("Enter Price:");
scanf("%d",&a.price);
printf("Enter Length and Breadth:\n");
scanf("%d%d",&a.length,&a.breadth);
printf("Enter Pages:");
scanf("%d",&a.pages);
printf("\n*****PRINTING STRUCTURE ARE*****\n");
printf("\nBrand Name:%s\n",a.brname);
printf("Colour:%s\n",a.colour);
printf("Price:%d\n",a.price);
printf("Length and Breadth:%d%d\n",a.length,a.breadth);
printf("Pages:%d\n",a.pages);
getch();
}