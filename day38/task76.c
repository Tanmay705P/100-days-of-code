//Check if a matrix is symmetric.
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

bool isSymmetric(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid matrix order. Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (isSymmetric(matrix, n)) {
        printf("\nThe matrix is Symmetric.\n");
    } else {
        printf("\nThe matrix is Not Symmetric.\n");
    }

    return 0;
}