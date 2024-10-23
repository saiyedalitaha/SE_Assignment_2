//28.Convert years into days and months
#include <stdio.h>

int main() {
    int years, months, days;

    // Accepting the number of years from the user
    printf("Enter the number of years: ");
    scanf("%d", &years);

    // Converting years into months and days
    months = years * 12;        // 1 year = 12 months
    days = years * 365;         // 1 year = 365 days

    // Displaying the result
    printf("%d years is approximately %d months and %d days.\n", years, months, days);

    return 0;
}
 
