class Solution {
public:
    // Function to check how many bouquets can be made by day 'f'
    int func(vector<int>& a, int f, int m, int k) {
        int n = a.size();
        int b = 0; // consecutive bloomed flowers
        int t = 0; // total bouquets formed

        for (int i = 0; i < n; i++) {
            if (a[i] <= f) {
                b++;
                if (b == k) {
                    b = 0;
                    t++;
                    if (t == m) return t; // early exit
                }
            } else {
                b = 0; // reset if consecutive is broken
            }
        }
        return t;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        
        // Check for impossible case, use long long to avoid overflow
        if ((long long)m * k > n) return -1;

        int low = 1;
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = high; // store minimum feasible day

        // Binary search for the minimum day
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int v = func(bloomDay, mid, m, k);

            if (v >= m) {       // feasible day
                ans = mid;      // store answer
                high = mid - 1; // try smaller day
            } else {            // not enough bouquets
                low = mid + 1;
            }
        }

        return ans;
    }
};
