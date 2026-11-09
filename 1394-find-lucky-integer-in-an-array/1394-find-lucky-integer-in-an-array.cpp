class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int i = 0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int k = -1;
        for(auto x : mp){
            if(x.first == x.second)
            k = max(k,x.first);
        }

        return k;
        
    }
};