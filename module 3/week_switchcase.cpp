//37. WAP to show i. Monday to Sunday using switch case    
#include <stdio.h>

int main() {
    int dayNumber;

    // Input the day number
    printf("Enter the day number (1-7): ");
    scanf("%d", &dayNumber);

    // Determine and print the corresponding day
    switch (dayNumber) {
        case 1:
            printf("Day: Monday\n");
            break;
        case 2:
            printf("Day: Tuesday\n");
            break;
        case 3:
            printf("Day: Wednesday\n");
            break;
        case 4:
            printf("Day: Thursday\n");
            break;
        case 5:
            printf("Day: Friday\n");
            break;
        case 6:
            printf("Day: Saturday\n");
            break;
        case 7:
            printf("Day: Sunday\n");
            break;
        default:
            printf("Invalid day number! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}

