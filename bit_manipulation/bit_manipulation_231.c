/*
my simple solution
*/
bool isPowerOfTwo(int n){
    int cnt = 0;
    while(n){
        if(n & 0x1){
            cnt += 1;
        }
        if(cnt>1){
            return false;
        }
        n = n >> 1;
    }
    return cnt;
}

/*
more clear solution
refer to https://leetcode.com/problems/power-of-two/solutions/1004377/c-solution-0ms/?q=C&orderBy=most_relevant
*/
bool isPowerOfTwo(int n){
    if(n == 1) return true;
    if(n & 1) return false;
    return n > 0 && (n & (n - 1)) == 0;
}
