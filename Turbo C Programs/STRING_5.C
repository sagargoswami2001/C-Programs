#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int i,j,len,val;
char *s1,*s2;
clrscr();
printf("Enter Your Name:\n");
gets(s1);
len=strlen(s1);
j=0;
for(i=len-1;i>=0;i--)
{
s2[j]=s1[i];
j++;
}
s2[j]='\0';
printf("String Reverse: %s",s2);

val=strcmp(s1,s2);
if(val==0)
printf("\nString is Polindrome");
else
printf("\nString is not Polindrome");
getch();
}