//Delete an element from an array.
#include <stdio.h>

void deleteElement(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index for deletion.\n");
        return;
    }

    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int indexToDelete = 2; 

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteElement(arr, &size, indexToDelete);

    printf("Array after deleting element at index %d: ", indexToDelete);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}