int findComplement(int num)
{
    int tmp = num;
    int cnt = 0;
    while (tmp > 0)
    {
        cnt = (cnt << 1) | 1;
        tmp = tmp >> 1;
    }
    return cnt ^ num;
}