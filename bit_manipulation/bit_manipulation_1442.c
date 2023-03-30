/*
refer to https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/solutions/2813770/c/
*/
int countTriplets(int* arr, int arrSize){
    if (arrSize < 2) 
        return 0;
    int ans = 0;
    for (int i = 0; i < arrSize; i++) {
        int temp = arr[i];
        for (int j = i + 1; j < arrSize; j++) {
            temp = temp ^ arr[j];
            if (temp == 0) 
                ans += j - i;
        }
    }
    return ans;
}