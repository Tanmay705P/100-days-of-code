//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int find_ceil_index(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    int ceil_index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= x) {
            ceil_index = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ceil_index;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    
    int index = find_ceil_index(arr, n, x);
    
    if (index != -1) {
        printf("Index of ceil of %d: %d\n", x, index);
        printf("Ceil value: %d\n", arr[index]);
    } else {
        printf("-1\n");
    }

    return 0;
}
