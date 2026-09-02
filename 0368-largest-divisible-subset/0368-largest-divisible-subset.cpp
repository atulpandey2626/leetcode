class Solution {
public:
int solve(int i,int prev,vector<int>& nums,vector<vector<int>> &dp){
    if(i==nums.size())
    return 0;
    if(dp[i][prev + 1]!=-1)
    return dp[i][prev +1];
    int nottake = solve(i+1,prev,nums,dp);
    int take = 0;
    if(prev == -1 || nums[i]%nums[prev]==0)
    take = 1 + solve(i+1,i,nums,dp);
    return dp[i][prev + 1] = max(take,nottake);

}
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        solve(0,-1,nums,dp);
        vector<int> ans;
        int i = 0;
        int prev = -1;
        while(i<n){
    int nottake = solve(i+1,prev,nums,dp);
    int take = 0;
    if(prev == -1 || nums[i]%nums[prev]==0)
    {take = 1 + solve(i+1,i,nums,dp);}
    if((prev == -1 || nums[i]%nums[prev] == 0) && take>=nottake){
        ans.push_back(nums[i]);
        prev = i;
    }
    i++;


        }
        return ans;
        
    }
};