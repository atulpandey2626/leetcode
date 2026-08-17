class Solution {
public:
void solve(int i,int sum,int target,vector<int>& candidates, vector<vector<int>> &v,vector<int> &a){
       if(i>=candidates.size())
       return;
        if(sum == target)
        {v.push_back(a);
        return;}
        
        if(sum>target)
        return;
        if(candidates[i]<=target)
        {a.push_back(candidates[i]);
        solve(i,sum+candidates[i],target,candidates,v,a);
        a.pop_back();}
        solve(i+1,sum,target,candidates,v,a);


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> a;
        solve(0,0,target,candidates,v,a);
        return v;

        
    }
};