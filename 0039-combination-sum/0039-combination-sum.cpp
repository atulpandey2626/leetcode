#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int>& curr, vector<vector<int>>& ans, int start) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (target < 0) return;

        for (int i = start; i < candidates.size(); i++) {
            curr.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], curr, ans, i); // reuse allowed
            curr.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(candidates, target, curr, ans, 0);
        return ans;
    }
};
