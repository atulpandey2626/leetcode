class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> mx;
        mx[0] = 1;
       int c = 0;
       int n = 0;
       for(int i = 0;i<nums.size();i++){
        n = n+nums[i];
        if(mx.find(n-k)!=mx.end())
        c = c+mx[n-k];
        mx[n]++;
       }
       return c;

    }
};