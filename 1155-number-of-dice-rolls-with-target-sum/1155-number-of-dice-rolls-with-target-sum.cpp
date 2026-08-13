class Solution {
public:
int dp [31][1001];
const long long mod = 1e9 + 7;
int solve(int i,int sum,int n,int k, int target){
     if(i==n){
        if(sum == target)
        return 1;
        else return 0;
     }
     if(sum>target)
     return 0;
     if(dp[i][sum] != -1)
    return dp[i][sum];
     long long a = 0;
     for(int j = 1;j<=k;j++){
        a = (a + solve(i+1,sum+j,n,k,target))%mod;
     }
     return dp[i][sum] = a;
     
}
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,n,k,target);
        
    }
};