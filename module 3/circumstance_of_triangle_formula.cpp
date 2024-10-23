//9.Find circumference of Triangle formula : triangle =a + b + c 
#include <stdio.h>

#include <stdio.h>

int main() {
    float a, b, c, circumference;

    // Prompt user for the lengths of the sides
    printf("Enter the lengths of the three sides of the triangle:\n");
    
    printf("Side a: ");
    scanf("%f", &a);
    
    printf("Side b: ");
    scanf("%f", &b);
    
    printf("Side c: ");
    scanf("%f", &c);

    // Calculate circumference
    circumference = a + b + c;

    // Display the result
    printf("Circumference of the triangle: %.2f\n", circumference);

    return 0;
}

