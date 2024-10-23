//17.Calculate person’s insurance premium based on salary 
#include <stdio.h>

int main() {
    float salary, premium;
    float premiumRate = 0.05; // Example: 5% of the salary

    // Input the person's salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Calculate the insurance premium
    premium = salary * premiumRate;

    // Output the insurance premium
    printf("Your insurance premium is: %.2f\n", premium);

    return 0;
}

