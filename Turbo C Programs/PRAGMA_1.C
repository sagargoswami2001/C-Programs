#include<stdio.h>
#include<conio.h>
void func1();
void func2();
#pragma startup func1
#pragma exit func2
void func1()
{
clrscr();
printf("Inside Starting Function\n");
}
void func2()
{
printf("Inside Exit Function\n");
}
void main()
{
printf("Inside Main Function\n");
getch();
}