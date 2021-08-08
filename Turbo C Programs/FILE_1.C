#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
int i;
char name[20];
clrscr();
printf("Enter Your Name:\n");
gets(name);
fp=fopen("file-1.txt","a");
for(i=0;name[i]!='\0';i++)
{
putc(name[i],fp);
}
printf("Data Written Succesfully\n");
getch();
}