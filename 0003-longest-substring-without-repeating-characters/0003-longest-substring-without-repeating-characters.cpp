class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);  // store last seen index for each char
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            // If we have seen the character and it's inside the window
            if (last[c] >= left) {
                left = last[c] + 1;
            }

            last[c] = right;  // update last seen position
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
