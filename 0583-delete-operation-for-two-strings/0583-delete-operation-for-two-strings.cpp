class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int k = word2.size();
        vector<vector<int>> dp(n+1,vector<int>(k+1));
        for(int i = 0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int i = 0;i<=k;i++){
            dp[0][i] = 0;
        }
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=k;j++){
                if(word1[i-1]==word2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
                else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return n - dp[n][k] + k - dp[n][k];
    }
};