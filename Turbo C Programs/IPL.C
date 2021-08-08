#include<stdio.h>
#include<conio.h>
void main()
{
char team1[30],team2[30];
int a,b,c,d;
int a1,b1,c1,d1;
int scoreteam1,scoreteam2;
clrscr();
printf("\nEnter the First Team Name:");
scanf("%s",&team1);
fflush(stdin);
printf("\nEnter the Second Team Name:");
scanf("%s",&team2);
fflush(stdin);
printf("\nEnter the Score of RCB:-");
printf("\nEnter the Run Scored by Virat Kohli From RCB:");
scanf("%d",&a);
fflush(stdin);
printf("\nEnter the Run Scored by Devillers From RCB:");
scanf("%d",&b);
fflush(stdin);
printf("\nEnter the Run Scored by Parthiv Patel From RCB:");
scanf("%d",&c);
fflush(stdin);
printf("\nEnter the Run Scored by Chris Gyle From RCB:");
scanf("%d",&d);
fflush(stdin);
scoreteam1=a+b+c+d;
printf("\nEnter the Score of Mumbai Indians:-");
printf("\nEnter the Run Scored by Rohit From Mumbai Indians:");
scanf("%d",&a1);
fflush(stdin);
printf("\nEnter the Run Scored by Sachin From Mumbai Indians:");
scanf("%d",&b1);
fflush(stdin);
printf("\nEnter the Run Scored by Pollard From Mumbai Indians:");
scanf("%d",&c1);
fflush(stdin);
printf("\nEnter the Run Scored by Hardik Pandya From Mumbai Indians:");
scanf("%d",&d1);
fflush(stdin);
scoreteam2=a1+b1+c1+d1;
if(scoreteam1>scoreteam2)
{
printf("\nRCB is The Winner");
}
else
{
printf("\nMumbai Indians is the Winner");
}
if(a>b&&a>c&&a>d&&a>a1&&a>b1&&a>c1&&a>d1)
printf("\nMan of the Match is Virat Kohli");
else
if(b>c&&b>d&&b>a1&&b>b1&&b>c1&&b>d1)
printf("\nMan of the Match is Devillers");
else
if(c>d&&c>a1&&c>b1&&c>c1&&c>d1)
printf("\nMan of the Match is Parthiv Patel");
else
if(d>a1&&d>b1&&d>c1&&d>d1)
printf("\nMan of the Match is Chris Gyle");
else
if(a1>b1&&a1>c1&&a1>d1)
printf("\nMan of the Match is Rohit");
else
if(b1>c1&&b1>d1)
printf("\nMan of the Match is Sachin");
else
if(c1>d1)
printf("\nMan of the Match is Pollard");
else
printf("\nMan of the Match is Hardik Pandya");
getch();
}