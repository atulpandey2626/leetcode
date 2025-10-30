class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;       // pointer for nums1's valid elements
        int j = n - 1;       // pointer for nums2
        int k = m + n - 1;   // pointer for the last position in nums1

        // merge from the end of both arrays
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // if there are remaining elements in nums2
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
