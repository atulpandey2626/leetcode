class Solution {
public:
    int maximumSwap(int num) {
        string v = to_string(num);
        vector<int> freq(10,-1);
        for(int i = 0;i<v.size();i++){
            freq[v[i] - '0'] = i;
        }
        for(int i = 0;i<v.size();i++){
            int current = v[i] - '0';
            for(int j = 9;j>current;j--){
                if(freq[j]>i){
                    swap(v[i],v[freq[j]]);
                    return stoi(v);
                }
            }
        }
        return num;

        
    }
};