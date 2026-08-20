class Solution {
public:
    int dp[2001][2001];
    bool pal[2001][2001];

    void makePalindrome(string &s) {
        int n = s.size();

        for(int i = n - 1; i >= 0; i--) {
            for(int j = i; j < n; j++) {

                if(s[i] == s[j] &&
                   (j - i <= 1 || pal[i + 1][j - 1])) {
                    pal[i][j] = true;
                }
            }
        }
    }

    int solve(int i, int j, string &s) {

        if(i >= j)
            return 0;

        if(pal[i][j])
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        int ans = INT_MAX;

        for(int k = i; k < j; k++) {

            
            if(pal[i][k]) {

                int right = solve(k + 1, j, s);

                ans = min(ans, 1 + right);
            }
        }

        return dp[i][j] = ans;
    }

    int minCut(string s) {

        memset(dp, -1, sizeof(dp));
        memset(pal, false, sizeof(pal));

        makePalindrome(s);

        return solve(0, s.size() - 1, s);
    }
};