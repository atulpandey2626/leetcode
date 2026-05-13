class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        for(int i = 0;i<nums.size()-1;i++){
            int sum = nums[i];
            for(int j = i + 1;j<nums.size();j++){
                sum = sum + nums[j];
                if(sum == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
                else sum = nums[i];

            }
        }
        return v;
        
    }
};