#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
FILE *fp;
clrscr();
fp=fopen("file-4.txt","r");
i=getw(fp);
j=getw(fp);
printf("i=%d",i);
printf("j=%d",j);
getch();
}