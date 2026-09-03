class Solution {
public:

    int solve(int e, int f, vector<vector<int>>& dp) {

        if(f == 0 || f == 1)
            return f;

        if(e == 1)
            return f;

        if(dp[e][f] != -1)
            return dp[e][f];

        int a = INT_MAX;

        int low = 1;
        int high = f;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            int eggbreak = solve(e - 1, mid - 1, dp);
            int nobreak = solve(e, f - mid, dp);

            int d = 1 + max(eggbreak, nobreak);

            a = min(a, d);

            if(eggbreak < nobreak) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return dp[e][f] = a;
    }

    int superEggDrop(int k, int n) {

        vector<vector<int>> dp(
            k + 1,
            vector<int>(n + 1, -1)
        );

        return solve(k, n, dp);
    }
};