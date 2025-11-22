//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>
#include <stdlib.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < m) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int m, n;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int *arr1 = (int *)malloc(m * sizeof(int));
    printf("Enter sorted elements for the first array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int *arr2 = (int *)malloc(n * sizeof(int));
    printf("Enter sorted elements for the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int *mergedArr = (int *)malloc((m + n) * sizeof(int));

    mergeSortedArrays(arr1, m, arr2, n, mergedArr);

    printf("Merged sorted array: ");
    for (int i = 0; i < (m + n); i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(mergedArr);

    return 0;
}
