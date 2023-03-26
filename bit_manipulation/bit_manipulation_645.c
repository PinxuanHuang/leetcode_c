/**
 * Note: The returned array must be malloced, assume caller calls free().
 my simple answer.
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize){
    int *arr = calloc((numsSize+1), sizeof(int));
    int *ans = malloc(sizeof(int)*2);
    *returnSize = 2; 
    for(int i = 0;i<numsSize;i++){
        arr[nums[i]] += 1;
    }
    for(int i = 1;i<numsSize+1;i++){
        if(arr[i] == 2){
            ans[0] = i;
        }
        if(arr[i] == 0){
            ans[1] = i;
        }
    }
    free(arr);
    return ans;
}