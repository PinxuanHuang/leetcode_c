bool hasAlternatingBits(int n){
    int prev;
    prev = n & 0x1;
    n = n >> 1;
    while(n > 0){
        if(prev == (n & 0x1)){
            return false;
        }
        prev = n & 0x1;
        n = n >> 1;
    }
    return true;
}

/*
Other solution
refer to https://leetcode.com/problems/binary-number-with-alternating-bits/solutions/235199/c-4ms-bit-manipulation/?q=C&orderBy=most_relevant
*/
bool hasAlternatingBits(int n) {
    long temp = n;
    int lead = 0;
    while(n != 0)
    {
        n = n >> 1;
        lead++;
    }
    
    return((temp ^ (temp >> 1)) == (((long)1<<lead)-1));
}