//17.Write a C program to check whether a triangle can be formed with the givenvalues for the angles.
#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Read angles from the user
    printf("Enter the first angle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle: ");
    scanf("%d", &angle2);
    printf("Enter the third angle: ");
    scanf("%d", &angle3);

    // Check if the angles can form a triangle
    if (angle1 + angle2 + angle3 == 180) {
        printf("The angles can form a triangle.\n");
    } else {
        printf("The angles cannot form a triangle.\n");
    }

    return 0;
}

