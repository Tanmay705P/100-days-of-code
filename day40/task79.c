//Perform diagonal traversal of a matrix.
#include <stdio.h>
#include <stdlib.h>

void diagonalTraversal(int** matrix, int rows, int cols) {
    int i = 0, j = 0;
    int direction = 1;

    for (int k = 0; k < rows * cols; ++k) {
        printf("%d ", matrix[i][j]);

        if (direction == 1) {
            i--;
            j++;
        } else {
            i++;
            j--;
        }

        if (i < 0 || j >= cols || i >= rows || j < 0) {
            if (direction == 1) {
                i++;
                if (j >= cols) {
                    j = cols - 1;
                    i++;
                }
            } else {
                j++;
                if (i >= rows) {
                    i = rows - 1;
                    j++;
                }
            }
            direction = 1 - direction;
        }
    }
    printf("\n");
}

int main() {
    int rows = 3;
    int cols = 3;

    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    int count = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = count++;
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal Traversal:\n");
    diagonalTraversal(matrix, rows, cols);

    for (int i = 0; i < rows; ++i) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}