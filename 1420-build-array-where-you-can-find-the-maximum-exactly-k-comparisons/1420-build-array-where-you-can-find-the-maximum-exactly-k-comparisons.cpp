class Solution {
public:
    const long long MOD = 1e9 + 7;
    long long dp[51][101][51];

    long long solve(int i, int previous, int v, int n, int m, int k) {
        if (v > k)
            return 0;

        if (i == n)
            return v == k;

        if (dp[i][previous][v] != -1)
            return dp[i][previous][v];

        long long a = 0;

        for (int j = 1; j <= m; j++) {
            int newPrevious = previous;
            int newV = v;

            if (j > newPrevious) {
                newPrevious = j;
                newV++;
            }

            a = (a + solve(i + 1, newPrevious, newV, n, m, k)) % MOD;
        }

        return dp[i][previous][v] = a;
    }

    int numOfArrays(int n, int m, int k) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 0, n, m, k);
    }
};