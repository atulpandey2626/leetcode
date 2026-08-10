class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int k = INT_MAX;
        for(int i = 1;i<arr.size();i++){
            k = min(k,abs(arr[i-1]-arr[i]));

        }
        vector<vector<int>> v;
        for(int i = 1;i<arr.size();i++){
            if(abs(arr[i-1]-arr[i])==k)
            v.push_back({arr[i-1],arr[i]});

        }
        return v;
    }
};