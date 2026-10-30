class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int j = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]!=val){
                swap(nums[i],nums[k]);
                k++;
                j++;

            }
        }
        return j;
        
    }
};