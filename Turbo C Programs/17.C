#include<stdio.h>
#include<conio.h>
int calsum(int,int);
void main()
{
int first_no,second_no,sum;
clrscr();
printf("Enter the Two No:-\n");
scanf("%d%d",&first_no,&second_no);
sum=calsum(first_no,second_no);
printf("Sum the Two No %d and %d is %d",first_no,second_no,sum);
getch();
}
int calsum(a1,a2)
int a1,a2;
{
int add;
add=a1+a2;
return(add);
}