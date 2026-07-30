class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.size();
        int k = s2.size();
        vector<vector<int>> dp(n+1,vector<int>(k+1));
        for(int i = 0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int i = 0;i<=k;i++){
            dp[0][i] = 0;
        }
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=k;j++){
                if(s1[i-1]==s2[j-1])
                dp[i][j] = s1[i-1] + dp[i-1][j-1];
                else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        

         int s1t = 0;
        for(int i = 0;i<n;i++){
            s1t = s1t + s1[i];

        }
        int s2t = 0;
        for(int i = 0;i<k;i++){
            s2t = s2t + s2[i];

        }
        
        return s1t - dp[n][k] + s2t - dp[n][k]; 
        
    }
};