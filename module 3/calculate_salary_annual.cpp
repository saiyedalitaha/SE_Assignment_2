//18.Calculate person’s Annual 
#include <stdio.h>

int main() {
    float monthlySalary, annualSalary;

    // Ask the user for their monthly salary
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate annual salary
    annualSalary = monthlySalary * 12;

    // Display the annual salary
    printf("Your annual salary is: %.2f\n", annualSalary);

    return 0;
}

