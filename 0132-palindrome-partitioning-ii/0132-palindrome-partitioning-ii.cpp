class Solution {
public:
bool ispalindrome(int i,int k,string &s){
    while(i<k){
        if(s[i]!=s[k])
        return false;
        else
        i++;
        k--;
    }
    return true;
}
int solve(int i,string &s, vector<int> &dp){
    if(i == s.size())
    return 0;
    if(dp[i] != -1)
    return dp[i];
    int a = INT_MAX;
    for(int k = i;k<s.size();k++){
        if(ispalindrome(i,k,s))
        {int v = 1 + solve(k+1,s,dp);
        a = min(a,v);}
    }
    return dp[i] = a;
}
    int minCut(string s) {
        vector<int> dp(s.size() + 1,-1);
        return solve(0,s,dp) - 1;
        
    }
};