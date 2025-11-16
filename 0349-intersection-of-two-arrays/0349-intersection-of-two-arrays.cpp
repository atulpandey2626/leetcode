class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> resultSet;

        for(int n : nums2){
            if(s.count(n)){
                resultSet.insert(n);
            }
        }

        return vector<int>(resultSet.begin(), resultSet.end());
    }
};
