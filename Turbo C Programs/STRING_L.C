//Program to find the length of the string.
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int len=0;
char name[20];
printf("Enter Your Name:\n");
gets(name);
for(i=0;name[i]!='\0';i++)
{
len++;
}
printf("The Length of the String is %d",len);
getch();
clrscr();
}