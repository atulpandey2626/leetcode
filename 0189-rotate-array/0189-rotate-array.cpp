class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> v;
        int h = nums.size();
        int m = k%h;
        for(int i = 0;i<h-m;i++){
            v.push_back(nums[i]);
        }int j = 0;
        for(int i =h-m;i<h;i++){
            nums[j] = nums[i];
            j++;

        }
        for(int i = 0;i<v.size();i++){
            nums[m+i] = v[i];


        }

        
    }
};