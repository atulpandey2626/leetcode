class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> st;

        for(int i = 0; i < dictionary.size(); i++) {
            st.insert(dictionary[i]);
        }

        string ans = "";
        string v = "";

        for(int i = 0; i <= sentence.size(); i++) {
            if(i == sentence.size() || sentence[i] == ' ') {
                string k = "";

                for(int j = 0; j < v.size(); j++) {
                    k = k + v[j];

                    if(st.find(k) != st.end()) {
                        break;
                    }
                }

                if(k.size() > v.size() || st.find(k) == st.end())
                    k = v;

                ans = ans + k;

                if(i != sentence.size())
                    ans = ans + " ";

                v = "";
            }
            else {
                v = v + sentence[i];
            }
        }

        return ans;
    }
};