/*
my simple solution
*/
bool isPowerOfFour(int n){
    int cnt = 0;
    int idx = 0;
    while(n){
        if(n & 0x1){
            if(idx % 2){
                return false;
            }
            cnt += 1;
        }
        if(cnt>1){
            return false;
        }
        n = n >> 1;
        idx += 1;
    }
    return cnt;
}

