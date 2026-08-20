class Solution {
public:
    unordered_map<string, bool> dp;

    bool solve(string a, string b) {
        if (a == b)
            return true;

        if (a.size() != b.size())
            return false;

        int n = a.size();

        
        string key = a + "#" + b;

        if (dp.find(key) != dp.end())
            return dp[key];

        string x = a;
        string y = b;

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        if (x != y)
            return dp[key] = false;

        for (int k = 1; k < n; k++) {

            
            if (solve(a.substr(0, k), b.substr(0, k)) &&
                solve(a.substr(k), b.substr(k))) {
                return dp[key] = true;
            }

           
            if (solve(a.substr(0, k), b.substr(n - k)) &&
                solve(a.substr(k), b.substr(0, n - k))) {
                return dp[key] = true;
            }
        }

        return dp[key] = false;
    }

    bool isScramble(string s1, string s2) {
        if (s1.size() != s2.size())
            return false;

        return solve(s1, s2);
    }
};