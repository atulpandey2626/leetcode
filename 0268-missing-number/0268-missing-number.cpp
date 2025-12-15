class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int b = nums.size();
        int s = b*(b+1)/2;
        int k = 0;
        for(int i = 0;i<b;i++){
            k = k + nums[i];
        }
        
        int x = s-k;
        return x;

    }
};