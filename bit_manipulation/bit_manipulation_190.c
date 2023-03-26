/*
my simple answer
*/
uint32_t reverseBits(uint32_t n) {
    int bitLength = 32;
    uint32_t ans = 0;
    while(bitLength > 0){
        int cur = n & 0x1;
        ans = (ans<<1)|cur;
        n = n >> 1;
        bitLength -= 1;
    }
    return ans;
}

/*
cool answer
refer to https://leetcode.com/problems/reverse-bits/solutions/134330/one-liner-in-c/?q=C&orderBy=most_relevant
*/
uint32_t reverseBits(uint32_t n)
{

	return n = n << 16               | n >> 16,
	       n = n << 8 & 037700177400 | n >> 8 & 000077600377,
	       n = n << 4 & 036074170360 | n >> 4 & 001703607417,
	       n = n << 2 & 031463146314 | n >> 2 & 006314631463,
	           n << 1 & 025252525252 | n >> 1 & 012525252525;
}