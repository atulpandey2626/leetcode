class Solution {
public:
void solve(int index, vector<vector<int>> &v,vector<int> &nums,vector<int> &a,map <int , int> &k){
    if(a.size()==nums.size()){
        v.push_back(a);
        return;
    }
    for(int i = 0;i<nums.size();i++){
        if(k[i]!=1){
            a.push_back(nums[i]);
            k[i] = 1;
            solve(i+1,v,nums,a,k);
            a.pop_back();
            k[i] = 0;
        }
    }

}
    vector<vector<int>> permute(vector<int>& nums) {
        map <int , int> k;
        for(int i = 0;i<nums.size();i++){
            k[i] = 0;
        }
        vector<vector<int>> v;
        vector<int> a;
        solve(0,v,nums,a,k);
        return v;

        
    }
};