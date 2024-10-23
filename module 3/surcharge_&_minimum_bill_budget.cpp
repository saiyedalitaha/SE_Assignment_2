//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-
#include <stdio.h>

int main() {
    float bill, finalBill;

    // Input the bill amount
    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    // Check if the bill is less than the minimum required
    if (bill < 256) {
        printf("The minimum bill amount should be Rs. 256/-\n");
        return 0; // Exit the program
    }

    // Check if the bill exceeds Rs. 800
    if (bill > 800) {
        finalBill = bill + (bill * 0.18); // Add 18% surcharge
    } else {
        finalBill = bill; // No surcharge
    }

    // Output the final bill
    printf("The final bill amount is: Rs. %.2f\n", finalBill);

    return 0;
}

