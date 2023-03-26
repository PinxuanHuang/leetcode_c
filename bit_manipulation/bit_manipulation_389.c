/*
my simple answer
*/
char findTheDifference(char * s, char * t){
    int sLength = strlen(s);
    int tLength = strlen(t);
    int diff = t[sLength];
    for(int i = 0; i < sLength; i++){
        diff -= s[i];
        diff += t[i];
    }
    printf("s:%d t:%d  diff:%d\n", sLength, tLength, diff);

    return diff;
}

/*
bit manipulation answer
refer to https://leetcode.com/problems/find-the-difference/solutions/87037/c-solution-0ms/?q=C&orderBy=most_relevant
*/
char findTheDifference(char* s, char* t) {
    char c = t[0];
    int i = 0;
    while(s[i]){
        c = c ^ s[i] ^ t[++i];
    }
    return c;
}