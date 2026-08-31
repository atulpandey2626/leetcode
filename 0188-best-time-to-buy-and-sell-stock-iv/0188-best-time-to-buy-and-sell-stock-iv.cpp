class Solution {
public:
int solve(int i,int k,int j,vector<int>& prices,vector<vector<vector<int>>> &dp){
    if(i==prices.size()||k==0)
    return 0;
    if(dp[i][k][j]!=-1)
    return dp[i][k][j];
    if(j==0)
    return dp[i][k][j] = max(-prices[i]+solve(i+1,k,1,prices,dp),solve(i+1,k,0,prices,dp));
    else 
    return dp[i][k][j] = max(prices[i] + solve(i+1,k-1,0,prices,dp),solve(i+1,k,1,prices,dp));
}
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if(k >= n/2) {
        int profit = 0;

        for(int i = 1; i < n; i++)
            profit += max(0, prices[i] - prices[i-1]);

        return profit;}
        vector<vector<vector<int>>> dp (n,vector<vector<int>>(k+1,vector<int>(2,-1)));
        return solve(0,k,0,prices,dp);

        
    }
};