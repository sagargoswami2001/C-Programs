#include<stdio.h>
#include<conio.h>
void main()
{
char c;
FILE *f1;
clrscr();
f1=fopen("file-5.txt","r");
fseek(f1,-20,SEEK_END);
printf("%d",ftell(f1));
c=getc(f1);
while(c!=EOF)
{
printf("%c",c);
c=getc(f1);
}
rewind(f1);
printf("\n%d",ftell(f1));
getch();
}