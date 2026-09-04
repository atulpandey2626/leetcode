class Solution {
public:
int solve(int i,vector<int>& cost,vector<int> &dp){
    if(i==cost.size())
    return 0;
    if(i>cost.size())
    return 0;
    if(dp[i] != -1)
    return dp[i];
    int k = 0;
    int l = cost[i] + solve(i+1,cost,dp);
    int r = cost[i] + solve(i+2,cost,dp);
    k = min(l,r);
    return dp[i] = k;

}
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        int l = solve(0,cost,dp);
        int r = solve(1,cost,dp);
        return min(l,r);

        
    }
};