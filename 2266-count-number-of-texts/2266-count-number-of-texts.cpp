class Solution {
public:
    const long long MOD = 1e9 + 7;
    long long dp[100001];

    long long solve(int i, string &s) {
        if (i == s.size())
            return 1;

        if (s[i] == '0')
            return 0;

        if (dp[i] != -1)
            return dp[i];

        long long a = 0;

        
        a = (a + solve(i + 1, s)) % MOD;

        
        if (i + 1 < s.size() && s[i] == s[i + 1]) {
            a = (a + solve(i + 2, s)) % MOD;
        }

        
        if (i + 2 < s.size() &&
            s[i] == s[i + 1] &&
            s[i + 1] == s[i + 2]) {
            a = (a + solve(i + 3, s)) % MOD;
        }

        
        if (i + 3 < s.size() &&
            (s[i] == '7' || s[i] == '9') &&
            s[i] == s[i + 1] &&
            s[i + 1] == s[i + 2] &&
            s[i + 2] == s[i + 3]) {
            
            a = (a + solve(i + 4, s)) % MOD;
        }

        return dp[i] = a;
    }

    int countTexts(string pressedKeys) {
        memset(dp, -1, sizeof(dp));
        return solve(0, pressedKeys);
    }
};