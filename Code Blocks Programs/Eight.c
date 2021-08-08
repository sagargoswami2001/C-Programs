/*Ram's salary is input through the keyboard. his dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary.*/
#include<stdio.h>
int main()
{
    float basic_salary, dallowance, house_rent, gross_salary;
    printf("Enter Basic Salary:");
    scanf("%f", & basic_salary);

    dallowance = 0.4 * basic_salary;
    house_rent = 0.2 * basic_salary;

    gross_salary = basic_salary + dallowance + house_rent;

    printf("\n Basic Salary:%f", basic_salary);
    printf("\n Dearness Allowance:%f", dallowance);
    printf("\n House Rent:%f", house_rent);
    printf("\n Gross Salary:%f\n", gross_salary);
    return 0;

}
