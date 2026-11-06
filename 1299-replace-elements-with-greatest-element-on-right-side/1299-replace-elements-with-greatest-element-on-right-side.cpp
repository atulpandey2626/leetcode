class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> v (n,0);
        int large = arr[n-1];
        v[n-1] = -1;
        for(int j = n-2;j>=0;j--){
            v[j] = large;
            if(arr[j]>large)
            large = arr[j];
        }
        return v;
        
    }
};