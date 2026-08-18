class Solution {
public:
    int minOperations(vector<int>& nums) {
        int a = 0;
        int k = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(nums[i]>k)
            k = nums[i];
            else {
                int temp = k - nums[i] + 1;
                k = temp + nums[i];
                 a += temp;
            }
        }
            
        return a;
        
    }
};