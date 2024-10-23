//20. Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.
#include <stdio.h>

int main() {
    float monthlySalary, insuranceDeduction, loanDeduction, remainingSalary;

    // Ask the user for their monthly salary
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate deductions
    insuranceDeduction = monthlySalary * 0.10; // 10% for insurance
    loanDeduction = monthlySalary * 0.10;       // 10% for loan installment

    // Calculate remaining salary
    remainingSalary = monthlySalary - (insuranceDeduction + loanDeduction);

    // Display the results
    printf("Insurance deduction: %.2f\n", insuranceDeduction);
    printf("Loan deduction: %.2f\n", loanDeduction);
    printf("Remaining salary: %.2f\n", remainingSalary);

    return 0;
}

