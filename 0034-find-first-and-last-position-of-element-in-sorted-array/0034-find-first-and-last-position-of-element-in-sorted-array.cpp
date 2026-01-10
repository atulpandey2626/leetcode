class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        vector <int> v;
        if(nums.empty()){
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
       
        
int k = -1;
while (low <= high) {
    int mid = low + (high - low) / 2;
    if(nums[mid]==target)
   { k=mid;
    high = mid - 1;}

    else if (nums[mid] > target) {
       high = mid -1;
    } else {
      low = mid + 1;
    }
}
if(k!=-1)
v.push_back(k);



int lows = 0;
 int highs = nums.size()-1;
 int b = -1;


while (lows <= highs) {
    int mid = lows + (highs - lows) / 2;
    if(nums[mid]==target)
    {b = mid;
    lows =  mid + 1;}

    else if (nums[mid] < target) {
        lows = mid + 1;
    } else {
        highs = mid - 1;
    }
}
if(b!=-1)
v.push_back(b);
if(v.empty()){
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }

return v;




        
    } 
};