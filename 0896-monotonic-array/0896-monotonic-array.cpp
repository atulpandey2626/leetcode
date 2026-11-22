class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i = 0;

        while(i < nums.size() - 1 && nums[i] == nums[i+1]){
            i++;
        }

        if(i == nums.size() - 1)
            return true;

        if(nums[i] > nums[i+1]) {
            for(int i = 0; i < nums.size() - 1; i++){
                if(nums[i] < nums[i+1])
                    return false;
            }
        }
        else {
            for(int i = 0; i < nums.size() - 1; i++){
                if(nums[i] > nums[i+1])
                    return false;
            }
        }

        return true;
    }
};