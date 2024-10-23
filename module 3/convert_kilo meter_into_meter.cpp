//31. Convert kilometers into meters
#include <stdio.h>

int main() {
    float kilometers, meters;

    // Accepting the number of kilometers from the user
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Converting kilometers to meters
    meters = kilometers * 1000; // 1 kilometer = 1000 meters

    // Displaying the result
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    return 0;
}

