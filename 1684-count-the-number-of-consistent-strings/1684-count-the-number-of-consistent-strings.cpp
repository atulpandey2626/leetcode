class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int v = 0;
        for(int i = 0;i<words.size();i++){
            int k = words[i].size();
            set<char> st;
            for(int j = 0;j<k;j++){
                st.insert(words[i][j]);
            }

            bool flag = true;

            for(auto x : st){
                if(allowed.find(x) == string::npos){
                    flag = false;
                    break;
                }
            }

            if(flag)
            v++;
        }

        return v;
    }
};