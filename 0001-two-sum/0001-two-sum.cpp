class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        map <int,int> mp;
        mp[nums[0]] = 0;
        for(int i = 1;i<nums.size();i++){
           int sum = target - nums[i];
            if(mp.find(sum)!=mp.end()){
                v.push_back(i);
                v.push_back(mp[sum]);
                return v;
            }
            else mp[nums[i]] = i;

        }
        return v;
        
    }
};