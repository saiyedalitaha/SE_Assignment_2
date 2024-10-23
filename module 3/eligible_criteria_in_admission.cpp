//15.Write a C program to determine eligibility for admission to a professionalcourse based on the following criteria 
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marksin Chem>=50 and Total in all three subject >=190 or
//Total in Maths and Physics >=140 ---- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the
//marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :188 Total marks of Maths and Physics : 137 The candidate is not eligible.
#include <stdio.h>

int main() {
    int math, physics, chemistry;
    int total, total_math_phy;

    // Input marks for each subject
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &math);

    // Calculate total marks
    total = math + physics + chemistry;
    total_math_phy = math + physics;

    // Check eligibility
    if ((math >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) ||
        (total_math_phy >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
\
