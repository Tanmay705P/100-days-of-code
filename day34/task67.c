//Insert an element in an array at a given position.
#include <stdio.h>

void insertElement(int arr[], int *size, int position, int value) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    (*size)++;
}

int main() {
    int arr[10];
    int size = 5;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int positionToInsert = 2;
    int valueToInsert = 25;

    insertElement(arr, &size, positionToInsert, valueToInsert);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}