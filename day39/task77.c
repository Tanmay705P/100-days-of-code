//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

bool areDiagonalElementsDistinct(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix1[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    int matrix2[3][3] = {{1, 2, 3},
                         {4, 1, 6},
                         {7, 8, 9}};

    if (areDiagonalElementsDistinct(matrix1, 3)) {
        printf("Diagonal elements of matrix1 are distinct.\n");
    } else {
        printf("Diagonal elements of matrix1 are not distinct.\n");
    }

    if (areDiagonalElementsDistinct(matrix2, 3)) {
        printf("Diagonal elements of matrix2 are distinct.\n");
    } else {
        printf("Diagonal elements of matrix2 are not distinct.\n");
    }

    return 0;
}