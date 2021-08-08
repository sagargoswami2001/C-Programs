#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int result;
char *first,*second;
clrscr();
printf("Enter Two String:\n");
gets(first);
gets(second);
result=strcmp(first,second);
if(result==0)
printf("String Are Equal\n");
if(result>0)
printf("First String is Greater than Second\n");
else
printf("Second String is Greater than First\n");
getch();
}