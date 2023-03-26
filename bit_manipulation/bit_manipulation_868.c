/*
my simple solution
*/
int binaryGap(int n){
    bool flag = false;
    int max_dist = 0, prev = 0, idx = 0;
    while(n > 0){
        int cur = n & 0x1;
        if(cur){
            if(flag){
                int cur_dist = idx - prev;
                if(cur_dist > max_dist){
                    max_dist = cur_dist;
                }
                prev = idx;
            }
            else{
                prev = idx;
                flag = true;
            }
        }
        idx += 1;
        n = n >> 1;
    }
    return max_dist;
}