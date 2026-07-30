class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int k = nums2.size();
        vector<vector<int>> dp(n+1,vector<int> (k+1));
        for(int i = 0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int i = 0;i<=k;i++){
            dp[0][i] = 0;
        }
        int a = 0;
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=k;j++){
                if(nums1[i-1]==nums2[j-1])
                {dp[i][j] = 1 + dp[i-1][j-1];
                a = max(a,dp[i][j]);}
                else dp[i][j] = 0;
            }
        }
        return a;
    }
};