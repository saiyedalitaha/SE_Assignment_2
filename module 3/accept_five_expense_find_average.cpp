//25.Accept 5 expense from user and find average of expense
#include <stdio.h>

int main() {
    float expenses[5]; // Array to store 5 expenses
    float totalExpense = 0.0;
    float averageExpense;

    // Accepting 5 expenses from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        totalExpense += expenses[i]; // Calculate total expenses
    }

    // Calculating average expense
    averageExpense = totalExpense / 5;

    // Displaying total and average expense
    printf("\nTotal Expense: %.2f\n", totalExpense);
    printf("Average Expense: %.2f\n", averageExpense);

    return 0;
}
