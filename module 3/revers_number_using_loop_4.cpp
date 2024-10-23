//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6n
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Ask for user input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Loop from n down to 1
    for (int i = n; i >= 1; i--) {
        if (i % 2 == 0) {
            sum -= (double)i / (i + 1); // Even index: subtract
        } else {
            sum += (double)i / (i + 1); // Odd index: add
        }
    }

    // Print the result
    printf("The result of the series is: %.6f\n", sum);

    return 0;
}

