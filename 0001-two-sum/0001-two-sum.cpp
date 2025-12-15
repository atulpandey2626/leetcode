class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        unordered_map <int,int> mx;
        for(int i = 0;i<nums.size();i++){
          if(mx.find(target-nums[i])!=mx.end()){
            v.push_back(i);
            v.push_back(mx[target-nums[i]]); 
          }
         else {
        mx[nums[i]] = i;}
        }

        return v;

    }
};