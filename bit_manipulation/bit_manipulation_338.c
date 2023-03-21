/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int bit_counter(int num){
    int counter = 0;
    while(num != 0){
        if(num & 0x1){
            counter += 1;
        }
        num = num >> 1;
    }
    return counter;
}

int* countBits(int n, int* returnSize){
    int *arr = malloc((n+1)*sizeof(int));
    *returnSize = n+1;
    for(int i = 0; i <= n; i++){
        arr[i] = bit_counter(i);
    }
    return arr;
}