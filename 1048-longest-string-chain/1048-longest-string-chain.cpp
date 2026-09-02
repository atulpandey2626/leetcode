class Solution {
public:

    bool val(string &a, string &b) {
        if(a.size() != b.size() + 1)
            return false;

        int i = 0;
        int j = 0;

        while(i < a.size() && j < b.size()) {
            if(a[i] == b[j]) {
                i++;
                j++;
            }
            else {
                i++;
            }
        }

        return j == b.size();
    }

    int solve(int i, int prev, vector<string>& words,
              vector<vector<int>>& dp) {

        if(i == words.size())
            return 0;

        // Already calculated
        if(dp[i][prev + 1] != -1)
            return dp[i][prev + 1];

        // Don't take
        int nottake = solve(i + 1, prev, words, dp);

        // Take
        int take = 0;

        if(prev == -1 || val(words[i], words[prev])) {
            take = 1 + solve(i + 1, i, words, dp);
        }

        return dp[i][prev + 1] = max(take, nottake);
    }

    int longestStrChain(vector<string>& words) {

        
        sort(words.begin(), words.end(),
             [](string &a, string &b) {
                 return a.size() < b.size();
             });

        int n = words.size();

       
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        return solve(0, -1, words, dp);
    }
};