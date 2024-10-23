//5. WAP to take two Array input from user and sort them in ascending ordescending order as per user’s choice
#include <stdio.h>

void sortArray(int arr[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n1, n2;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    // Input elements of first array
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    // Input elements of second array
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // User choice for sorting order
    int choice;
    printf("Sort in:\n1. Ascending\n2. Descending\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);
    int ascending = (choice == 1);

    // Sort both arrays
    sortArray(arr1, n1, ascending);
    sortArray(arr2, n2, ascending);

    // Print sorted arrays
    printf("Sorted first array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Sorted second array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

