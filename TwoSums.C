#include "stdio.h"
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    int i, j;
    for (i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsSize; ++j) {
            if(i!=j && nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    free(result);
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);
    printf("%d %d\n", result[0], result[1]);
    return 0;
}