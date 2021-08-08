#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char name[20];
FILE *fp;
clrscr();
fp=fopen("file-3.txt","r");
fscanf(fp,"%d",i);
fscanf(fp,"%s",name);
printf("Age: %d",i);
printf("Name: %s",name);
getch();
}