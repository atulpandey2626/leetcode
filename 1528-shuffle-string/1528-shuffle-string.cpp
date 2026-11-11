class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,string> mp;
        for(int i = 0;i<indices.size();i++){
            mp[indices[i]] = s[i];
        }
        string v = "";
        for(auto x : mp){
            v = v + x.second;
        } 

        return v;   
    }
};