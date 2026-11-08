class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v = heights;
        int k = 0;
        sort(v.begin(),v.end());
        for(int i = 0;i<v.size();i++){
            if(v[i]!=heights[i])
            k++;
        }

        return k;
        
    }
};