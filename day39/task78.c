//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
#define SIZE 10

int main() {
    int matrix[SIZE][SIZE];
    int i, j, rows, cols, sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }

    printf("The sum of main diagonal elements is = %d\n", sum);

    return 0;
}
