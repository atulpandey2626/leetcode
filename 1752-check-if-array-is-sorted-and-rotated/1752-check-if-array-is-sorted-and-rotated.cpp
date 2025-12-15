class Solution {
public:
    bool check(vector<int>& nums) {
        int c = 0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i])
            continue;
            else if(nums[i+1]<nums[i])
            c++;
        }
        if(c==0)
        return true;
        else if(c==1 && nums[nums.size()-1]<=nums[0])
        return true;
        else
        return false;

    }
};