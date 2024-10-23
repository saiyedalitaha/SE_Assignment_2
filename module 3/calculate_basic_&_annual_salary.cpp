//32. Write a C program to input basic salary of an employee and calculateits Gross salary according to following: Basic Salary <= 10000 : HRA = 20%, DA=
// 80%Basic Salary <= 20000 : HRA =25%, DA = 90% Basic Salary > 20000 : HRA = 30%, DA = 95%\
#include <stdio.h>

int main() 
{
    float basicSalary, HRA, DA, grossSalary;

    // Input basic salary
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on the basic salary
    if (basicSalary <= 90000) {
        HRA = basicSalary * 0.20; // 20% HRA
        DA = basicSalary * 0.80;  // 80% DA
    } else if (basicSalary <= 80000) {
        HRA = basicSalary * 0.25; // 25% HRA
        DA = basicSalary * 0.90;  // 90% DA
    } else {
        HRA = basicSalary * 0.30; // 30% HRA
        DA = basicSalary * 0.95;  // 95% DA
    }

    // Calculate gross salary
    grossSalary = basicSalary + HRA + DA;

    // Output the gross salary
    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}

