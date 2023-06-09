/*
refer to https://leetcode.com/problems/binary-watch/solutions/88457/c-binary-watch/?q=C&orderBy=most_relevant
*/
int solve(int n)
{
    int ans=0;
    while(n)
    {ans+=n&1;n>>=1;}
    return ans;
}
char** readBinaryWatch(int num, int* returnSize) {
    if(num==0)
    {
        *returnSize=1;
        char** result=(char**)malloc(sizeof(char*)*(*returnSize));
        result[0]=(char*)malloc(sizeof(char)*6);
        result[0]="0:00";
        return result;
    }
    char** result=(char**)malloc(sizeof(char*)*1000);
    int temp_i=0,temp=0;
    int count=0;
    for(int i=0;i<12;i++)
    {
        temp_i=solve(i);
        for(int j=0;j<60;j++)
        {
            temp=temp_i+solve(j);
            if(temp==num)
            {
                result[count]=(char*)malloc(sizeof(char)*6);
                sprintf(result[count],"%d:%02d",i,j);
                count++;
            }
        }
    }
    *returnSize=count;
    return result;
}