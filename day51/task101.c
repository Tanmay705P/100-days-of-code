//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
#include <string.h>

int find_first(int nums[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int first = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            first = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return first;
}

int find_last(int nums[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int last = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            last = mid;
            left = mid + 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return last;
}

int main() {
    int nums[] = {2, 4, 10, 10, 10, 18, 20};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 10;

    int first_occurrence = find_first(nums, n, target);
    int last_occurrence = find_last(nums, n, target);

    printf("Index of first occurrence: %d\n", first_occurrence);
    printf("Index of last occurrence: %d\n", last_occurrence);

    if (first_occurrence != -1) {
        printf("First occurrence value: %d\n", nums[first_occurrence]);
        printf("Last occurrence value: %d\n", nums[last_occurrence]);
    }

    return 0;
}
