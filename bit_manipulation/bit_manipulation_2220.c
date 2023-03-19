int minBitFlips(int start, int goal)
{
    int ans = 0;
    int diff = start ^ goal;
    while (diff != 0)
    {
        if (diff & 0x1)
        {
            ans += 1;
        }
        diff = diff >> 1;
    }
    return ans;
}