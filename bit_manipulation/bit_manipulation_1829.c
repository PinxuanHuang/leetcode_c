/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getMaximumXor(int* nums, int numsSize, int maximumBit, int* returnSize){
    int max = 1;
    int idx = numsSize-1;
    int tmp = 0;
    int *ans = calloc(numsSize, sizeof(int));
    *returnSize = numsSize;
    while(maximumBit > 0){
        max *= 2;
        maximumBit -= 1;
    }
    max--;
    for(int i = 0;i<numsSize; i++){
        tmp = tmp ^ nums[i];
        ans[idx--] = tmp ^ max;
    }
    return ans;
}