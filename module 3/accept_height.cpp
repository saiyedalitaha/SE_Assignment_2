//8. WAP to accept the height of a person in centimeters and categorize theperson according to their height.

#include <stdio.h>

int main() {
    float height;

    // Read height from the user
    printf("Enter height in centimeters: ");
    scanf("%f", &height);

    // Categorize based on height
    if (height < 150) {
        printf("Category: Short\n");
    } else if (height >= 150 && height < 180) {
        printf("Category: Average\n");
    } else {
        printf("Category: Tall\n");
    }

    return 0;
}

