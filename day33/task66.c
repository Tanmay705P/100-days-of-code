//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

void insertSorted(int arr[], int *n, int capacity, int value) {
    if (*n >= capacity) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    int i;
    int pos = *n; 

    for (i = 0; i < *n; i++) {
        if (arr[i] > value) {
            pos = i;
            break;
        }
    }

    for (i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    (*n)++;
}

int main() {
    int capacity = 10;
    int arr[capacity];
    int n = 5; 

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int valueToInsert = 35;
    insertSorted(arr, &n, capacity, valueToInsert);

    printf("Array after inserting %d: ", valueToInsert);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    valueToInsert = 5;
    insertSorted(arr, &n, capacity, valueToInsert);

    printf("Array after inserting %d: ", valueToInsert);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    valueToInsert = 60;
    insertSorted(arr, &n, capacity, valueToInsert);

    printf("Array after inserting %d: ", valueToInsert);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}