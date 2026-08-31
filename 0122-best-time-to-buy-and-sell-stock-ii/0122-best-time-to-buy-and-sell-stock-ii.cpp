class Solution {
public:

int solve(int i,int j,vector<int>& prices,vector<vector<int>> &dp ){
    if(i==prices.size())
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(j==0)
    return dp[i][j] =  max(-prices[i] + solve(i+1,1,prices,dp),solve(i+1,0,prices,dp));
    else 
    return dp[i][j] = max(prices[i] + solve(i+1,0,prices,dp),solve(i+1,1,prices,dp));
}
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp (n,vector<int>(2,-1));
        return solve(0,0,prices,dp);
        
    }
};