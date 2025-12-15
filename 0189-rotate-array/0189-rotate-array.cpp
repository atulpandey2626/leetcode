class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int b = nums.size();
        int c = k%b;
        vector <int> v;
        for(int i =0;i<b-c;i++){ 
           v.push_back(nums[i]);
        }
        for(int i = 0;i<c;i++){
            nums[i] = nums[b-c+i];
        }
        for(int i = c;i<b;i++){
            nums[i] =v[i-c];
        }
        
    }
};