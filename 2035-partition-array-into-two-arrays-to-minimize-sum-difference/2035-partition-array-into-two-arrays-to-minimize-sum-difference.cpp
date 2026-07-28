class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size() / 2;

        vector<vector<int>> left(n + 1), right(n + 1);

       
        for (int mask = 0; mask < (1 << n); mask++) {
            int sum = 0;
            int bits = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    sum += nums[i];
                    bits++;
                }
            }
            left[bits].push_back(sum);
        }

        
        for (int mask = 0; mask < (1 << n); mask++) {
            int sum = 0;
            int bits = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    sum += nums[n + i];
                    bits++;
                }
            }
            right[bits].push_back(sum);
        }

        for (int i = 0; i <= n; i++)
            sort(right[i].begin(), right[i].end());

        int total = accumulate(nums.begin(), nums.end(), 0);
        int ans = INT_MAX;

        for (int k = 0; k <= n; k++) {
            for (int a : left[k]) {
                int target = total / 2 - a;

                auto &vec = right[n - k];
                auto it = lower_bound(vec.begin(), vec.end(), target);

                if (it != vec.end()) {
                    int s = a + *it;
                    ans = min(ans, abs(total - 2 * s));
                }

                if (it != vec.begin()) {
                    --it;
                    int s = a + *it;
                    ans = min(ans, abs(total - 2 * s));
                }
            }
        }

        return ans;
    }
};