class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse from the last digit
        for (int i = n - 1; i >= 0; i--) {
            // If current digit is less than 9, just increment and return
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If it's 9, it becomes 0 and carry goes to next digit
            digits[i] = 0;
        }

        // If all digits were 9, we have a carry at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
