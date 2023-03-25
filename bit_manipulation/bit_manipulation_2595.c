/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *evenOddBit(int n, int *returnSize)
{
    int idx = 0;
    int *ans = malloc(2 * sizeof(int));
    ans[0] = 0;
    ans[1] = 0;
    *returnSize = 2;

    while (n > 0)
    {
        if (n & 0x1)
        {
            if (idx % 2)
            {
                ans[1] = ans[1] + 1;
            }
            else
            {
                ans[0] = ans[0] + 1;
            }
        }
        n = n >> 1;
        idx += 1;
    }
    return ans;
}