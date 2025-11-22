//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
#include <stdlib.h>

void findFirstNegative(int arr[], int n, int k) {
    int i, j;
    for (i = 0; i <= n - k; i++) {
        int firstNegative = 0;
        for (j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNegative = arr[i + j];
                break;
            }
        }
        printf("%d ", firstNegative);
    }
    printf("\n");
}

int main() {
    int n, k;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    findFirstNegative(arr, n, k);

    free(arr);
    return 0;
}