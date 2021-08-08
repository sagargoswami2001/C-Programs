#include<stdio.h>
#include<conio.h>
typedef struct
{
int hno;
char zipcode[5];
char city[50];
char state[50];
char landmark[50];
int bno;
}
address;
typedef struct
{
int eno;
char name[20];
address a1;
}
employee;
employee e1;

void main()
{
clrscr();
printf("Enter the Address Information(Hno,Zipcode,City,State,Landmark and Building No\n");
scanf("%d",&e1.a1.hno);
scanf("%s",e1.a1.zipcode);
scanf("%s",e1.a1.city);
scanf("%s",e1.a1.state);
scanf("%s",e1.a1.landmark);
scanf("%d",&e1.a1.bno);
printf("Enter the Employee Eno & Name\n");
scanf("%d",&e1.eno);
scanf("%s",&e1.name);
printf("\n Employee Eno:%d\n Emp Name:%s\n",e1.eno,e1.name);
printf("\n Address :\n Hno:%d\n Zipcode:%s\n City:%s\n State:%s\n Landmark:%s\n Building No:%d\n",e1.a1.hno,e1.a1.zipcode,e1.a1.city,e1.a1.state,e1.a1.landmark,e1.a1.bno);
getch();
}