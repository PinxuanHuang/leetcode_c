/*
my simple solution
*/
int missingNumber(int* nums, int numsSize){
    int ans = 0;
    int *arr = malloc(sizeof(int) * (numsSize+1));
    for(int i = 0; i < numsSize+1; i++){
        arr[i] = 1;
        printf("arr[%d] = 1\n", i);
    }
    for(int i = 0; i<numsSize; i++){
        arr[nums[i]] = 0;
        printf("arr[%d] = 0\n", nums[i]);
    }
    for(int i = 0; i<numsSize+1; i++){
        if(arr[i]){
            ans = i;
        }
    }
    free(arr);
    return ans;
}

/*
better solution
*/
int missingNumber(int* nums, int numsSize){
    int sum = 0;
    for (int i=0; i < numsSize; i++) {
        sum ^=nums[i];
        sum ^=i;
    }
    sum ^= numsSize;

    return sum;

}