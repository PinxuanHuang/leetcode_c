int maximumXOR(int* nums, int numsSize){
    int ans = 0;
    // int *arr = malloc(sizeof(int) * numsSize);
    for(int j = 0; j<numsSize; j++){
        ans = ans | nums[j];
    }
    return ans;
}