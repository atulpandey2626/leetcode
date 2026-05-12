class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0;
        int k = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
            l++;
            k = max(k,l);
            } else l = 0;
        }
        return k;
        
    }
};