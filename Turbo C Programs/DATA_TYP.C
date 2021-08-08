#include<stdio.h>
#include<conio.h>
void main()
{
int a;
short b;
long int c;
double d;
char e;
float f;
long double g;
unsigned int h;
clrscr();
printf("The Value of int : %d Bytes\n",sizeof(a));
printf("The Value of short : %d Bytes\n",sizeof(b));
printf("The Value of long int : %d Bytes\n",sizeof(c));
printf("The Value of double : %d Bytes\n",sizeof(d));
printf("The Value of char : %d Bytes\n",sizeof(e));
printf("The Value of float : %d Bytes\n",sizeof(f));
printf("The Value of long double : %d Bytes\n",sizeof(g));
printf("The Value of unsigned int : %d Bytes\n",sizeof(h));
getch();
}