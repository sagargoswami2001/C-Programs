#include<stdio.h>
#include<conio.h>
void main()
{
char sagar;
clrscr();
printf("\nEnter an Uppercase Alphabet:");
scanf("%c",&sagar);
switch(sagar)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("\nIt is a Vowel");
break;
default:
printf("\It is a not Vowel");
break;
}
getch();
}