/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* answer = (int*)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;

    if (numsSize == 0) {
        return answer;
    }

    answer[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return answer;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* answer = productExceptSelf(nums, numsSize, &returnSize);

    printf("Output array: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", answer[i]);
        if (i < returnSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(answer);
    return 0;
}