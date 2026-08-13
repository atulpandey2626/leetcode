class Solution {
public:
    int dp[5001][10];
    const long long mod = 1e9 + 7;

    int solve(int i, int k, int n) {
        if (i == n - 1)
            return 1;

        if (dp[i][k] != -1)
            return dp[i][k];

        long long a = 0;

        if (k == 0) {
            a = (a + solve(i + 1, 6, n)) % mod;
            a = (a + solve(i + 1, 4, n)) % mod;
        }

        if (k == 1) {
            a = (a + solve(i + 1, 6, n)) % mod;
            a = (a + solve(i + 1, 8, n)) % mod;
        }

        if (k == 2) {
            a = (a + solve(i + 1, 7, n)) % mod;
            a = (a + solve(i + 1, 9, n)) % mod;
        }

        if (k == 3) {
            a = (a + solve(i + 1, 8, n)) % mod;
            a = (a + solve(i + 1, 4, n)) % mod;
        }

        if (k == 4) {
            a = (a + solve(i + 1, 3, n)) % mod;
            a = (a + solve(i + 1, 9, n)) % mod;
            a = (a + solve(i + 1, 0, n)) % mod;
        }

        if (k == 6) {
            a = (a + solve(i + 1, 1, n)) % mod;
            a = (a + solve(i + 1, 7, n)) % mod;
            a = (a + solve(i + 1, 0, n)) % mod;
        }

        if (k == 7) {
            a = (a + solve(i + 1, 2, n)) % mod;
            a = (a + solve(i + 1, 6, n)) % mod;
        }

        if (k == 8) {
            a = (a + solve(i + 1, 1, n)) % mod;
            a = (a + solve(i + 1, 3, n)) % mod;
        }

        if (k == 9) {
            a = (a + solve(i + 1, 4, n)) % mod;
            a = (a + solve(i + 1, 2, n)) % mod;
        }

        return dp[i][k] = a;
    }

    int knightDialer(int n) {
        memset(dp, -1, sizeof(dp));

        long long ans = 0;

        for (int j = 0; j <= 9; j++) {
            ans = (ans + solve(0, j, n)) % mod;
        }

        return ans;
    }
};