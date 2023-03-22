bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    int i, flag = 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        return false;
    }
    return true;
}

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

int countPrimeSetBits(int left, int right)
{
    int ans = 0;
    for (int num = left; num <= right; num++)
    {
        int ntob = bit_counter(num);
        bool is_prime = isPrime(ntob);
        if (is_prime)
        {
            ans += 1;
        }
    }
    return ans;
}