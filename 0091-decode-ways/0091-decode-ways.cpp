class Solution {
public:
    int dp[101];

    int solve(string &s, int i) {
        if (i == s.size())
            return 1;

        if (s[i] == '0')
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int on = solve(s, i + 1);
        int to = 0;

        if (i < s.size() - 1) {
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

            if (num >= 10 && num <= 26)
                to = solve(s, i + 2);
        }

        return dp[i] = on + to;
    }

    int numDecodings(string s) {
        memset(dp, -1, sizeof(dp));
        return solve(s, 0);
    }
};