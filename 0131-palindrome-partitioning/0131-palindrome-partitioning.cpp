class Solution {
public:

    bool ispalindrome(int i, int k, string &s) {
        while(i < k) {
            if(s[i] != s[k])
                return false;

            i++;
            k--;
        }
        return true;
    }

    void solve(int i, int n, vector<vector<string>>& a,
               string &s, vector<string>& v) {

        if(i == n) {
            a.push_back(v);
            return;
        }

        for(int k = i; k < n; k++) {

            if(ispalindrome(i, k, s)) {

                string t = s.substr(i, k-i+1);

                v.push_back(t);

                solve(k+1, n, a, s, v);

                v.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        int n = s.size();

        vector<vector<string>> dp;
        vector<string> v;

        solve(0, n, dp, s, v);

        return dp;
    }
};