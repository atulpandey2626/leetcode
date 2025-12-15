class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int x = INT_MIN;
        int c = 0;
        int k = 0;
        for(int i = 0;i<nums.size();i++){
            k = k+nums[i];
            x = max(k,x);
            if(k<0)
            k=0;
        } return x;
        
    } 
};