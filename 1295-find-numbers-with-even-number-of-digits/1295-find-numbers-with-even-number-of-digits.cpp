class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int cn = 0;
        for(int i = 0;i<n;i++){
            int k = nums[i];
            int digit = 0;
            while(k>0){
                digit++;
                k = k/10;
            }
            if(digit%2==0)
            cn++;
        }
        return cn;
        
    }
};