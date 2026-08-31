class Solution {
public:
    int solve(int i, int j, int k, vector<int>& prices,
              vector<vector<vector<int>>> &dp) {

        if(i == prices.size() || k == 2)
            return 0;

        if(dp[i][j][k] != -1)
            return dp[i][j][k];

        if(j == 0)
            return dp[i][j][k] = max(
                -prices[i] + solve(i+1, 1, k, prices, dp),
                solve(i+1, 0, k, prices, dp)
            );

        else
            return dp[i][j][k] = max(
                prices[i] + solve(i+1, 0, k+1, prices, dp),
                solve(i+1, 1, k, prices, dp)
            );
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(2, vector<int>(2, -1))
        );

        return solve(0, 0, 0, prices, dp);
    }
};