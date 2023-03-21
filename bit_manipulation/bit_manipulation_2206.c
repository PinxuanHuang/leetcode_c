/*
This xor solution can not pass all testcase, but why?
*/
bool divideArray(int* nums, int numsSize){
    int ans = 0;
    for(int i = 0; i < numsSize; i++){
        ans ^= nums[i];
    }
    if(ans){
        return false;
    }
    else{
        return true;
    }

}

/*
Following is not bit manipulation solution.
refer to https://leetcode.com/problems/divide-array-into-equal-pairs/solutions/1897430/c/?q=C&orderBy=most_relevant
*/
int findlen(int* nums, int numsSize) {
    int max = nums[0];
    for(int i = 1; i < numsSize; i++) {
        max = nums[i] > max ? nums[i] : max;
    }
    return max + 1;
}

bool divideArray(int* nums, int numsSize) {
    int arrSize = findlen(nums, numsSize);
    int* arr = (int*) calloc(arrSize, sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        arr[nums[i]]++;
    }
    for(int i = 0; i < numsSize; i++) {
        if(arr[nums[i]] % 2 != 0) {
            free(arr);
            return false;
        }
    }
    free(arr);
    return true;
}