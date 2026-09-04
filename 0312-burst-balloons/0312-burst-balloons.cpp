class Solution {
public:
    int solve(int i, int j, vector<int>& nums,vector<vector<int>> &dp) {

        if(i > j)
            return 0;

        int a = INT_MIN;
        if(dp[i][j] != -1)
        return dp[i][j];

        for(int k = i; k <= j; k++) {

            int x = nums[i-1] * nums[k] * nums[j+1]
                  + solve(i, k-1, nums,dp)
                  + solve(k+1, j, nums,dp);

            a = max(a, x);
        }

        return dp[i][j] = a;
    }

    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));

        nums.insert(nums.begin(), 1);
        nums.push_back(1);

        return solve(1, nums.size()-2, nums,dp);
    }
};