#include<stdio.h>
#include<conio.h>
void main()
{
int count=0,i;
char ch[20];
clrscr();
printf("\nEnter the String: ");
gets(ch);
for(i=0;ch[i]!='0';i++)
{
putchar(ch[i]);
printf("\n");
count++;
}
printf("Total Counts are Made: %d",count);
getch();
}