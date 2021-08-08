#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char oper;
clrscr();
printf("\nEnter the First Number:");
scanf("%d",&a);
fflush(stdin);
printf("\nEnter the Second Number:");
scanf("%d",&b);
fflush(stdin);
printf("\nEnter the Operator:");
scanf("%c",&oper);
fflush(stdin);
switch(oper)
{
case '+':
printf("%d+%d=%d",a,b,a+b);
break;
case '-':
printf("%d-%d=%d",a,b,a-b);
break;
case '*':
printf("%d*%d=%d",a,b,a*b);
break;
case '/':
printf("%d/%d=%d",a,b,a/b);
break;
default:
printf("Invalid Operator...Plz Try Again");
break;
}
getch();
}