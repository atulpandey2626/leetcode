class Solution {
public:
   
    int func(vector<int>& nums,int k){
        int n = nums.size();
        int x = 0;
        for(int i =0;i<n;i++){
            x = x + ceil((double)nums[i]/k);

        }
        return x;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int b = 0;
        int n = nums.size();
        int mx = *max_element(nums.begin(),nums.end());
        int low = 1;
        int high = mx;
        while(low<=high){
            int mid = (low+high)/2;
            int v = func(nums,mid);
            if(v<=threshold){
                b = mid;
                high = mid - 1;
            } else
            low = mid +1;
        }
        return b;
        
    }
};