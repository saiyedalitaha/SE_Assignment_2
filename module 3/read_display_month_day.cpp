//31. Write a program in C to read any Month Number in integer and display thenumber of days for this month.
#include <stdio.h>

int main() {
    int month, year, days;

    // Input the month number
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Check if the month number is valid
    if (month < 1 || month > 12) {
        printf("Invalid month number! Please enter a number between 1 and 12.\n");
        return 0; // Exit the program
    }

    // Input the year (to check for leap year)
    if (month == 2) {
        printf("Enter year: ");
        scanf("%d", &year);
        
        // Check if the year is a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29; // Leap year
        } else {
            days = 28; // Non-leap year
        }
    } else {
        // Determine the number of days in other months
        switch (month) {
            case 1: // January
            case 3: // March
            case 5: // May
            case 7: // July
            case 8: // August
            case 10: // October
            case 12: // December
                days = 31;
                break;
            case 4: // April
            case 6: // June
            case 9: // September
            case 11: // November
                days = 30;
                break;
        }
    }

    // Output the number of days in the month
    printf("Number of days in month %d: %d\n", month, days);

    return 0;
}

