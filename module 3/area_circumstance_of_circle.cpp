//3. WAP to Find Area And Circumference of Circle
#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Prompt user for radius input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}

