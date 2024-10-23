//36. Write a C program to input electricity unit charges and calculate totalelectricity bill according to the given condition:
//For first 50 units Rs.0.50/unit For next 100 units Rs. 0.75/unit For next 100 units Rs. 1.20/unit For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill
#include <stdio.h>

int main() {
    float units, bill, totalBill;

    // Input electricity unit charges
    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);

    // Calculate the bill based on the unit slabs
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Calculate total bill with surcharge
    totalBill = bill + (bill * 0.20); // Adding 20% surcharge

    // Output the total electricity bill
    printf("Total electricity bill: Rs. %.2f\n", totalBill);

    return 0;
}

