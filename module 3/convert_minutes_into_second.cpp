//29.Convert minutes into seconds and hours
#include <stdio.h>

int main() {
    int minutes, hours, seconds;

    // Accepting the number of minutes from the user
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Converting minutes into hours and seconds
    hours = minutes / 60;          // 1 hour = 60 minutes
    seconds = minutes * 60;        // 1 minute = 60 seconds

    // Displaying the result
    printf("%d minutes is equal to %d hours and %d seconds.\n", minutes, hours, seconds);

    return 0;
}

