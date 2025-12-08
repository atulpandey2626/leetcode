class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int h = k%n;
        reverse(nums.begin(),nums.begin()+(n-h));
        reverse(nums.begin()+(n-h),nums.end());
        reverse(nums.begin(),nums.end());

        
    }
};