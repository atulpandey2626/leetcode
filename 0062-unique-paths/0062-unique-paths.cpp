class Solution {
public:
int dp[101][101];
int solve(int i,int j,int m,int n){
    if(i==m-1&&j==n-1)
    return 1;
    if(i>=m || j>=n)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int a = 0;
    
        int t = solve(i+1,j,m,n);
        int e = solve(i,j+1,m,n);
        a = t + e;
    return dp[i][j] = a;
}
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,m,n);
        
    }
};