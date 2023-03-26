int bitwiseComplement(int n){
    int sum = 0, tmp = n;
    if(n == 0){
        return 1;
    }
    while(tmp > 0){
        tmp = tmp >> 1;
        sum = (sum<<1)|1;
    }
    return sum ^ n;
}