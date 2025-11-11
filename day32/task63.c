//Merge two arrays.
#include <stdio.h>

int main() {
    int arr1Size, arr2Size, mergedSize, i, j;
    int arr1[100], arr2[100], mergedArr[200];

    printf("Enter the size of the first array: ");
    scanf("%d", &arr1Size);
    printf("Enter elements of the first array: ");
    for (i = 0; i < arr1Size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &arr2Size);
    printf("Enter elements of the second array: ");
    for (i = 0; i < arr2Size; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < arr1Size; i++) {
        mergedArr[i] = arr1[i];
    }

    mergedSize = arr1Size + arr2Size;
    for (i = 0, j = arr1Size; j < mergedSize && i < arr2Size; i++, j++) {
        mergedArr[j] = arr2[i];
    }

    printf("Merged array elements: ");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}