class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        long long k = nums[n-1];
        long long a = 0;

        for(int i = n-2; i >= 0; i--) {
            if(nums[i] > k) {
                long long v = (nums[i] + k - 1) / k;

                a += v - 1;

                k = nums[i] / v;
            }
            else {
                k = nums[i];
            }
        }

        return a;
    }
};