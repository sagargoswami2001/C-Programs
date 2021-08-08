#include<stdio.h>
#include<conio.h>
void main()
{
char name[20];
int i;
clrscr();
printf("Enter Name: ");
gets(name);
for(i=0;name[i]!='\0';i++)
{
putchar(name[i]);
printf("%d",name[i]);
printf("\n");
}
getch();
}