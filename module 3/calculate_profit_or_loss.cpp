//18.Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_loss;

    // Input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    // Calculate profit or loss
    profit_loss = selling_price - cost_price;

    // Determine and display profit or loss
    if (profit_loss > 0) {
        printf("Profit: %.2f\n", profit_loss);
    } else if (profit_loss < 0) {
        printf("Loss: %.2f\n", -profit_loss); // Display loss as a positive value
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}

