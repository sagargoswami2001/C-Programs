#include<stdio.h>
#include<conio.h>
typedef struct
{
int flatno;
char bname[20];
int fno;
}
building;
building *b1;

void main()
{
clrscr();
printf("Enter the Building Name, Flat No and Floor No\n");
scanf("%s",&b1->bname);
scanf("%d",&b1->flatno);
scanf("%d",&b1->fno);
printf("Building Name:%s\n",b1->bname);
printf("Flat No:%d\n",b1->flatno);
printf("Floor:%d\n",b1->fno);
getch();
}
