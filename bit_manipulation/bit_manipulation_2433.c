/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int prefSize, int* returnSize){
    int *ans = malloc(prefSize * sizeof(int));
    *returnSize = prefSize;
    ans[0] = pref[0];
    for(int i = 1; i<prefSize; i++){
        ans[i] = pref[i-1] ^ pref[i];
    }
    return ans;
}