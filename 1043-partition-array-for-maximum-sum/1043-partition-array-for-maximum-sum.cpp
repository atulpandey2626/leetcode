class Solution {
public:
int solve(int i,int k,vector<int>& arr,vector<int> &dp){
    if(i==arr.size())
    return 0;
    if(dp[i] != -1)
    return dp[i];
    int d = INT_MIN;
    int a = INT_MIN;
    for(int j = i;j<i+k && j<arr.size();j++){
        d = max(d,arr[j]);
        int lengt = j - i + 1;
        int v = lengt*d + solve(j+1,k,arr,dp);
        a = max(v,a);


    }
    return dp[i] = a;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size() + 1,-1);
        return solve(0,k,arr,dp);
        
    }
};