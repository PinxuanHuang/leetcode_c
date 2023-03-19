int numberOfSteps(int num){
    int ans = 0;
    while(num != 0){
        if(num % 2 == 0){
            num = num >> 1;
        }
        else {
            num -= 1;
        }
        ans += 1;
    }
    return ans;
}

/*
More concise solution
refer to https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/solutions/575823/c-simple-and-short/
*/

int numberOfSteps (int num){
    int c = 0;
    for (; num ; c++)
        num -= num & 0x1 ? 1 : num >> 1;
    return c;
}