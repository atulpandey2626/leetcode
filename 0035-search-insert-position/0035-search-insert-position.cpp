class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
int low = 0;
int high = n - 1;
int k = n;

while (low <= high) {
    int mid = low + (high - low) / 2;

    if (nums[mid] >= target) {
        k = mid;          // possible answer
        high = mid - 1;   // search left
    } else {
        low = mid + 1;    // search right
    }
}

return k;

        
    }
};