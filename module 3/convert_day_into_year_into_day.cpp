//30. WAP to convert years into days and days into years
#include <stdio.h>

int main() {
    int years, days;
    float convertedYears;

    // Convert years into days
    printf("Enter the number of years: ");
    scanf("%d", &years);
    days = years * 365; // 1 year = 365 days
    printf("%d years is approximately %d days.\n", years, days);

    // Convert days into years
    printf("Enter the number of days: ");
    scanf("%d", &days);
    convertedYears = (float)days / 365; // Convert days to years
    printf("%d days is approximately %.2f years.\n", days, convertedYears);

    return 0;
}

