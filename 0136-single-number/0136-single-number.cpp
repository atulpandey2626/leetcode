class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> mx;
        for(int i = 0 ; i < nums.size() ; i++){
            mx[nums[i]]++;
        }for(auto it : mx){
            if(it.second == 1)
            return it.first ; 
                   }
                   return 0;

        
    }
};