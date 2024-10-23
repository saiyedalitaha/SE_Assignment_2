//35. Accept the input month number and print number of days in thatmonth.
#include <stdio.h>

int main() {
    int monthNumber, days;

    // Input the month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Determine the number of days in the specified month
    switch (monthNumber) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
        case 2:  // February
            // We will consider non-leap years for simplicity
            days = 28;
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
            return 0; // Exit the program for invalid input
    }

    // Output the number of days in the month
    printf("Number of days in month %d: %d\n", monthNumber, days);

    return 0;
}

