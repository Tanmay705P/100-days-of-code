//Add two matrices.
#include <stdio.h>

void inputMatrix(int matrix[][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int A[][10], int B[][10], int result[][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void displayMatrix(int matrix[][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int rows, cols;

    printf("Enter the number of rows and columns (max 10x10): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of Matrix A:\n");
    inputMatrix(A, rows, cols);

    printf("Enter elements of Matrix B:\n");
    inputMatrix(B, rows, cols);

    addMatrices(A, B, result, rows, cols);

    printf("\nMatrix A:\n");
    displayMatrix(A, rows, cols);

    printf("\nMatrix B:\n");
    displayMatrix(B, rows, cols);

    printf("\nResultant Matrix (A + B):\n");
    displayMatrix(result, rows, cols);

    return 0;
}