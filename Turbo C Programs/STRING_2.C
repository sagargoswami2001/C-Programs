#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int len;
char *nname;
printf("Enter the String:\n");
gets(nname);
 len=strlen(nname);
 printf("Length of the String: %d",len);
getch();
clrscr();
}
