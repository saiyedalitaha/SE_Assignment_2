//6. WAP to make addition, Subtraction and multiplication of two matrix using2-D Array
#include <stdio.h>

#define MAX 10 // Define maximum size for matrices

void addMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            result[i][j] = a[i][j] + b[i][j];
}

void subtractMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            result[i][j] = a[i][j] - b[i][j];
}

void multiplyMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rowA, int colA, int colB) {
    for (int i = 0; i < rowA; i++)
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];
    int rowA, colA, rowB, colB;

    // Input dimensions and elements for first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowA, &colA);
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowA; i++)
        for (int j = 0; j < colA; j++)
            scanf("%d", &a[i][j]);

    // Input dimensions and elements for second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowB, &colB);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowB; i++)
        for (int j = 0; j < colB; j++)
            scanf("%d", &b[i][j]);

    // Addition and subtraction (only if dimensions match)
    if (rowA == rowB && colA == colB) {
        addMatrices(a, b, result, rowA, colA);
        printf("Addition of matrices:\n");
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colA; j++)
                printf("%d ", result[i][j]);
            printf("\n");
        }

        subtractMatrices(a, b, result, rowA, colA);
        printf("Subtraction of matrices:\n");
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colA; j++)
                printf("%d ", result[i][j]);
            printf("\n");
        }
    } else {
        printf("Addition and subtraction not possible. Dimensions do not match.\n");
    }

    // Multiplication (only if columns of A match rows of B)
    if (colA == rowB) {
        multiplyMatrices(a, b, result, rowA, colA, colB);
        printf("Multiplication of matrices:\n");
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colB; j++)
                printf("%d ", result[i][j]);
            printf("\n");
        }
    } else {
        printf("Multiplication not possible. Dimensions do not match.\n");
    }

    return 0;
}

