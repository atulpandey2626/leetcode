class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k = 1;
        int l = 1;
        if(nums.empty())
        return 0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i] == nums[i-1] + 1)
            k++;
            else if ( nums[i] == nums[i-1])
            continue;
            else 
            k = 1 ;

            l = max(k,l);
        }
        return l;
    }
};