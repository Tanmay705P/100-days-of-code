//Find the maximum and minimum element in an array.
#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    if (n <= 0) {
        return;
    }

    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 5, 8, 20, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minValue, maxValue;

    findMinMax(arr, n, &minValue, &maxValue);

    printf("Minimum element: %d\n", minValue);
    printf("Maximum element: %d\n", maxValue);

    return 0;
}