//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid input: k cannot be greater than the array size.\n");
        return 1;
    }

    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);

    return 0;
}