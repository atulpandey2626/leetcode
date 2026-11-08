class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = -1;
        for(int i = 0;i<nums.size()-1;i++){
            int k = -1;
            for(int j = i + 1;j<nums.size();j++){
                if(nums[j]>nums[i] && nums[j] - nums[i] >k)
                k = nums[j] - nums[i];
            }
            if(k>diff)
            diff = k;
        }

        return diff;
        
    }
};