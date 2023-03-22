/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
My poor answer
*/
int bit_counter(num)
{
    int ans = 0;
    while (num)
    {
        if (num & 0x1)
        {
            ans += 1;
        }
        num = num >> 1;
    }
    return ans;
}

int *sortByBits(int *arr, int arrSize, int *returnSize)
{
    int *bit_arr = malloc(arrSize * sizeof(int));
    for (int i = 0; i < arrSize; i++)
    {
        bit_arr[i] = bit_counter(arr[i]);
    }
    *returnSize = arrSize;
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize - 1; j++)
        {
            if (bit_arr[j] > bit_arr[j + 1])
            {
                int bit_tmp = bit_arr[j];
                bit_arr[j] = bit_arr[j + 1];
                bit_arr[j + 1] = bit_tmp;
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            else if (bit_arr[j] == bit_arr[j + 1] && arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    free(bit_arr);
    return arr;
}