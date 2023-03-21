int hammingDistance(int x, int y){
    int counter = 0;
    int diff = x ^ y;
    while(diff){
        if(diff & 0x1){
            counter += 1;
        }
        diff = diff >> 1;
    }
    return counter;
}