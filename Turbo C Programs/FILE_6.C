#include<stdio.h>
#include<conio.h>
void main()
{
int count=0;
char c;
FILE *f1;
clrscr();
f1=fopen("file-6.txt","r");
c=getc(f1);
while(c!=EOF)
{
if(c==' ')
{
count++;
}
printf("%c",c);
c=getc(f1);
}
//printf("%d\n",' ');
printf("\nTotal No of Words in a File: %d",count);
getch();
}