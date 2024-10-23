//24.Accept 5 employees name and salary and count average and total salary
#include <stdio.h>

int main() {
    char names[5][50]; // Array to store names of 5 employees
    float salaries[5]; // Array to store salaries of 5 employees
    float totalSalary = 0.0;
    float averageSalary;

    // Accepting names and salaries of 5 employees
    for (int i = 0; i < 5; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        totalSalary += salaries[i]; // Calculate total salary
    }

    // Calculating average salary
    averageSalary = totalSalary / 5;

    // Displaying total and average salary
    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}

