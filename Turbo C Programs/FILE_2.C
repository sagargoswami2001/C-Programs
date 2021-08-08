#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
FILE *fp;
clrscr();
fp=fopen("file-2.txt","w");
printf("Enter Integers\n");
scanf("%d%d",&i,&j);
putw(i,fp);
putw(j,fp);
printf("Data Written Successfully");
getch();
}