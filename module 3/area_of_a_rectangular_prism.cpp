//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include <stdio.h>

int main() {
    float width, length, height, surface_area;

    // Prompt user for dimensions
    printf("Enter the dimensions of the rectangular prism:\n");
    
    printf("Length (l): ");
    scanf("%f", &length);
    
    printf("Width (w): ");
    scanf("%f", &width);
    
    printf("Height (h): ");
    scanf("%f", &height);

    // Calculate surface area using the formula
    surface_area = 2 * (width * length + height * length + height * width);

    // Display the result
    printf("Surface area of the rectangular prism: %.2f\n", surface_area);

    return 0;
}

