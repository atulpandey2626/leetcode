class Solution {
public:
void solve(int index,vector<vector<int>> &v,vector <int> &nums,vector <int> &a){
    v.push_back(a);
    for(int i = index;i<nums.size();i++){
        if(i>index && nums[i]==nums[i-1])
        continue;
        a.push_back(nums[i]);
        solve(i+1,v,nums,a);
        a.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        vector <int> a;
        solve(0,v,nums,a);
        return v;

        
    }
};