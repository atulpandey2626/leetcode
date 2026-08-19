class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        long long sum = 0;

        for(auto it : nums)
            sum += it;

        if(abs(target) > sum)
            return 0;

        if((target + sum) % 2 != 0)
            return 0;

        int k = (target + sum) / 2;

        vector<vector<int>> dp(nums.size() + 1,
                               vector<int>(k + 1, 0));

        dp[0][0] = 1;

        for(int i = 1; i <= nums.size(); i++) {
            for(int j = 0; j <= k; j++) {

                if(nums[i-1] <= j)
                    dp[i][j] = dp[i-1][j] +
                               dp[i-1][j - nums[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }

        return dp[nums.size()][k];
    }
};