//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>

int find_pivot_index(int arr[], int n) {
    int total_sum = 0;
    int left_sum = 0;
    int i;

    for (i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    for (i = 0; i < n; i++) {
        total_sum -= arr[i];

        if (left_sum == total_sum) {
            return i;
        }

        left_sum += arr[i];
    }

    return -1;
}

int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivot_index = find_pivot_index(arr, n);

    printf("Leftmost pivot index: %d\n", pivot_index);

    return 0;
}
