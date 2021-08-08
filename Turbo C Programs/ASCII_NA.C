//WAP to enter your name and display the ASCII Value against your name.
#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i;
clrscr();
printf("Enter Your Name : ");
//scanf("%s",&str);
gets(str);
for(i=0;i<str[i];i++)
{
printf("\nThe ASCII Value of %c is: %d\t",str[i],str[i]);
}
getch();
}