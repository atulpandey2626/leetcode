class Solution {
public:
void solve(int i,vector<vector<int>> &v,vector<int>& nums,vector <int> &a){
    if(i==nums.size()){
        v.push_back(a);
        return;
    }
    a.push_back(nums[i]);
    solve(i+1,v,nums,a);
    a.pop_back();
    solve(i+1,v,nums,a);
    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector <int> a;
        solve(0,v,nums,a);
        return v;

        
    }
};