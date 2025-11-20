//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int find_majority_element(int nums[], int n) {
    int count = 0;
    int candidate = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count++;
        } else if (candidate == nums[i]) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int nums[] = {3, 2, 3};
    int n = sizeof(nums) / sizeof(nums);
    int majority = find_majority_element(nums, n);
    printf("Majority element: %d\n", majority);

    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int n2 = sizeof(nums2) / sizeof(nums2);
    int majority2 = find_majority_element(nums2, n2);
    printf("Majority element: %d\n", majority2);

    int nums3[] = {1, 2, 3, 4};
    int n3 = sizeof(nums3) / sizeof(nums3);
    int majority3 = find_majority_element(nums3, n3);
    printf("Majority element: %d\n", majority3);

    return 0;
}
 