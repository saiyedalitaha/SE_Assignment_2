//7. Accept marks from user and check pass or fail
#include <stdio.h>

int main() {
    int marks;

    // Read marks from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Check if the marks are passing or failing
    if (marks >= 50) { // Assuming 50 is the passing mark
        printf("You have passed.\n");
    } else {
        printf("You have failed.\n");
    }

    return 0;
}

