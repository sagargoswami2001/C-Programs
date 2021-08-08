#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int len;
char *nname;
char *up;
clrscr();
printf("Enter the String\n");
gets(nname);
len=strlen(nname);
printf("Length of the String: %d\n",len);
strupr(nname);
printf("String in Uppercase: %s\n",nname);
strlwr(nname);
printf("String in Lowercase: %s\n",nname);
getch();
}
