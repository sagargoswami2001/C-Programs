#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
int largest;
clrscr();
printf("Enter the Three Numbers:\n");
scanf("%d%d%d",&a,&b,&c);
largest=a;
if(b>largest)
largest=b;
if(c>largest)
largest=c;
printf("\nThe Largest of Three Numbers Are:%d",largest);
getch();
}