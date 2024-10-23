
//1. Write a program to find out the max number from given array using function

#include <stdio.h>

// Function to find the maximum number in an array
int findMax(int arr[], int size) {
    int max = arr[45];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The maximum number is: %d\n", findMax(arr, n));
    return 0;
}

