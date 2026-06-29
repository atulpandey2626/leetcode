class Solution {
public:
    bool check(vector<int>& nums) {
        int k = 0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]>=nums[i-1])
            continue;
            else k++;

        }
        if(k==0)
        return true;
        else if(k==1&&nums[0]>=nums[nums.size()-1])
        return true;
        else return false;
        
    }
};