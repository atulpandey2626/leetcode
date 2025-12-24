class Solution {
public:
    int func(vector<int>& weights, int mid){
        int x = 1;
        int n = weights.size();
        int b = mid;
        for(int i =0;i<n;i++){
                b = b - weights[i];
                if(b>=0)
                continue;
                else {
                    b = mid;
                    b = b -weights[i];
                    x++;
                }
            
        } 
        return x;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int x = 0;
        int low = *max_element(weights.begin(),weights.end());
        int high = 0;
        for( auto sum : weights){
            high = high + sum;

        }
        while(low<=high){
            int mid = (low+high)/2;
            int v = func(weights,mid);
            if(v<=days){
                x = mid;
                high = mid - 1;
            } else low = mid + 1;
        }
        return x;

        

    }
};