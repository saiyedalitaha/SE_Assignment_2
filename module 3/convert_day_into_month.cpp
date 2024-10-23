//27.Convert days into months
#include <stdio.h>

int main() {
    int days, months, remainingDays;

    // Accepting number of days from the user
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Converting days into months
    months = days / 30; // Assume 1 month = 30 days
    remainingDays = days % 30; // Calculate remaining days

    // Displaying the result
    printf("%d days is approximately %d months and %d days.\n", days, months, remainingDays);

    return 0;
}

