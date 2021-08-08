//Q-WAP Which input the Emp_Id,Emp_Name,Dept,Basic_Sal,Hra,Da,Ta,and Pf Calculate the Gross Salary?
#include<stdio.h>
#include<conio.h>
void main()
{
int emp_id;
char emp_name[30];
char dept[15];
float basic_sal,hra,da,ta,pf,gross_salary;
clrscr();
printf("\nEnter the Employee ID:");
scanf("%d",&emp_id);
printf("\nEnter the Employee Name:");
scanf("%s",&emp_name);
printf("\nEnter the Department:");
scanf("%s",&dept);
printf("\nEnter the Basic Salary of Employee:");
scanf("%f",&basic_sal);
printf("\nEnter the HRA of Employee:");
scanf("%f",&hra);
printf("\nEnter the DA of Employee:");
scanf("%f",&da);
printf("\nEnter the TA of Employee:");
scanf("%f",&ta);
printf("\nEnter the PF of Employee:");
scanf("%f",&pf);
gross_salary=(basic_sal+hra+da+ta)-pf;
printf("----------OUTPUT----------\n");
printf("\nThe Employee Id is:%d",emp_id);
printf("\nThe Employee Name is:%s",emp_name);
printf("\nThe Employee Department is:%s",dept);
printf("\nThe Employee Basic Salary is:%f",basic_sal);
printf("\nThe Employee Gross Salary is:%f",gross_salary);
getch();
}