#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
float largest,smallest;
clrscr();
printf("Enter the Three Numbers:\n");
scanf("%f%f%f",&a,&b,&c);
largest=a;
if(b>largest)
largest=b;
if(c>largest)
largest=c;
printf("\nThe Largest of Three Numbers Are:%.2f",largest);
smallest=a;
if(b<smallest)
smallest=b;
if(c<smallest)
smallest=c;
printf("\nThe Smallest of Three Numbers Are:%.2f",smallest);
getch();
}