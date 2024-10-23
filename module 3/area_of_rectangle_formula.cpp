//7. Find area of Rectangle Formula : A=wl

#include <stdio.h>

int main() {
    float width, length, area;

    // Prompt user for the width and length of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Calculate the area
    area = width * length;

    // Display the result
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}

