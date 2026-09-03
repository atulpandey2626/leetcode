class Solution {
public:
    int solve(int i, int j, vector<int>& cuts, vector<vector<int>>& dp) {

        if(i > j)
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        int a = INT_MAX;

        for(int ind = i; ind <= j; ind++) {

            int v = cuts[j+1] - cuts[i-1]
                  + solve(i, ind-1, cuts, dp)
                  + solve(ind+1, j, cuts, dp);

            a = min(a, v);
        }

        return dp[i][j] = a;
    }

    int minCost(int n, vector<int>& cuts) {

        cuts.push_back(0);
        cuts.push_back(n);

        sort(cuts.begin(), cuts.end());

        int d = cuts.size();

        vector<vector<int>> dp(d, vector<int>(d, -1));

        return solve(1, d-2, cuts, dp);
    }
};