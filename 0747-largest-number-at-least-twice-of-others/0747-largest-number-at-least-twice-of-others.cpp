class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int large = -1;
        int index = -1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>large)
            {large = nums[i];
            index = i;}
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=large && 2*nums[i]>large)
            return -1;
        }
        return index;
        
    }
};