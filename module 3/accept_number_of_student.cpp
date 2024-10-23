//12. Accept number of students from user. I need to give 5 apples to eachstudent. How many apples are required?
#include <stdio.h>

int main() {
    int numStudents;
    int applesPerStudent = 5;
    int totalApples;

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Calculate total apples required
    totalApples = numStudents * applesPerStudent;

    // Display the result
    printf("Total apples required: %d\n", totalApples);

    return 0;
}

