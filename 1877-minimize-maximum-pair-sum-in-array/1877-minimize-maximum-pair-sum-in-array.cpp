class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0;
        int a = 0;
        int right = nums.size() - 1;
        while(left<right){
            a = max(a,nums[left]+nums[right]);
            left++;
            right--;

        }
        return a;
        
    }
};