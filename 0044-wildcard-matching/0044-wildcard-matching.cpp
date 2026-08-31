class Solution {
public:
    int dp[2001][2001];

    bool solve(int i, int j, string &s, string &p) {

        if(i == s.size() && j == p.size())
            return true;

        if(j == p.size())
            return false;

        if(i == s.size()) {
            while(j < p.size()) {
                if(p[j] != '*')
                    return false;
                j++;
            }
            return true;
        }

        if(dp[i][j] != -1)
            return dp[i][j];

        if(s[i] == p[j] || p[j] == '?')
            return dp[i][j] = solve(i+1, j+1, s, p);

        if(p[j] == '*') {
            return dp[i][j] = solve(i, j+1, s, p) ||
                              solve(i+1, j, s, p);
        }

        return dp[i][j] = false;
    }

    bool isMatch(string s, string p) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, s, p);
    }
};