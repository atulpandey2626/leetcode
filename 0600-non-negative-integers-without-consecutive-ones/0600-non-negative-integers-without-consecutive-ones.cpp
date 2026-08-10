class Solution {
public:
  string binary;
  long long dp[32][2][2][2];
 long long solve(int pos,int tight,int started,int prevone){
    if(pos==binary.size())
    return 1;
    if(dp[pos][tight][started][prevone]!=-1)
    return dp[pos][tight][started][prevone];
    int limit;
    if(tight)
    limit = binary[pos] - '0';
    else
    limit = 1;
    long long a = 0;
    for(int digit = 0;digit<=limit;digit++){
        if(prevone && digit == 1)
                continue;
        int newtight = tight && (digit == binary[pos] - '0');
        int newstarted = started || digit!=0;
        int newprev = prevone;
        if(newstarted)
        newprev = digit == 1;
        a += solve(pos + 1,newtight,newstarted,newprev);
    }
    return dp[pos][tight][started][prevone] = a;

 }
    int findIntegers(int n) {
        string b = "";
        while(n>0){
            b = b + char(n%2 + '0');
            n = n/2;
        }
        reverse(b.begin(),b.end());
        binary = b;
        memset(dp,-1,sizeof(dp));
        return solve(0,1,0,0);

        
        
    }
};