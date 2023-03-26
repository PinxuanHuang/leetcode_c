/*
refer to https://leetcode.com/problems/convert-a-number-to-hexadecimal/solutions/454727/c-playing-with-pointers/?q=C&orderBy=most_relevant
*/
char * toHex(int num){
    char dec2hex[] = "0123456789abcdef";
    unsigned unum = num;
    char* str = calloc(9, sizeof(char));
    char* p = str + 8;
    /* Another way to replace the two lines above
    char* str = calloc(9, sizeof(char));
    char* p = str + 8;
    str[8] = 0;
    */
    while (str != p) {
        *(--p) = dec2hex[unum & 0xF];
        unum >>= 4;
    }
    while (*p == '0' && *(p + 1) !='\0') p++;
    return p;
}