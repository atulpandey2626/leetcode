class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int i = 1;
        while(i<nums.size()){
            if(nums[j]==0&&nums[i]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if (nums[j]!=0){ 
                j++;
                i++;
                }
            else i++;
        }
        
    }
};