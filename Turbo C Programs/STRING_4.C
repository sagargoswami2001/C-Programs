#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char* result;
char *first="Sagar";
char *second="Mohit";
char *surname="Goswami";
clrscr();
printf("Enter Three String:\n");
gets(first);
gets(second);
gets(surname);
result=strcat(first,second);
result=strcat(result,surname);
printf("Result: %s\n",result);
getch();
}