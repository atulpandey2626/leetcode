class Solution {
public:
void print(vector<int> &v,int index,int n,vector<int> c,int k,vector<vector<int>> &an){
    if(k==0){
        an.push_back(c);
        return;
    }
    for(int i = index;i<n;i++){
        if(i>index && v[i] == v[i-1])
        continue;
        else {
            if(v[i]>k)
            return;
            c.push_back(v[i]);
            print(v,i+1,n,c,k-v[i],an);
        }
        c.pop_back();
        
    }

    

}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> an;
        vector<int> c;
        print(candidates,0,candidates.size(),c,target,an);
        return an;
        
    }
};