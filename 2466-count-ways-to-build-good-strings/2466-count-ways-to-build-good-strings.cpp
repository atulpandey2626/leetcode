class Solution {
public:
    const int MOD = 1e9 + 7;
    vector<int> dp;

    int solve(int s, int low, int high, int zero, int one) {
        if (s > high)
            return 0;

        if (dp[s] != -1)
            return dp[s];

        long long ans = 0;

        if (s >= low)
            ans = 1;

        ans += solve(s + zero, low, high, zero, one);
        ans += solve(s + one, low, high, zero, one);

        return dp[s] = ans % MOD;
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        dp.assign(high + 1, -1);

        return solve(0, low, high, zero, one);
    }
};