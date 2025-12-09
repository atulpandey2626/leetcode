class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int b = nums.size();
int i = 0;

for(int j = 0 ; j < b ; j++){
    if(nums[j] != 0){
        swap(nums[i], nums[j]);
        i++;
    }
}

    }
};