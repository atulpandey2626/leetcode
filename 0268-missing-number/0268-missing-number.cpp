class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int k = n*(n+1)/2;
        int h = 0;
        for(int i = 0;i<n;i++){
            h = h + nums[i];

        }
        int b = k - h;
        return b;
        
    }
};