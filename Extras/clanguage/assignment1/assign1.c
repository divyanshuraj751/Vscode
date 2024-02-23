#include <stdio.h>
int main()
{
    float basic_salary, dearness_allowance, house_rent, gross_salary;
    printf("Enter the basic salary of Ramesh\n");
    scanf("%f", &basic_salary);

    dearness_allowance = basic_salary * 0.4;
    house_rent = basic_salary * 0.2;
    gross_salary = basic_salary + dearness_allowance + house_rent;

        printf("The gross salary is %0.2f", gross_salary);

    return 0;
}