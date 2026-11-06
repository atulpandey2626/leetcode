class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
       int n = mat.size();
       int f = mat[0].size();
        for(int i = 0;i<n;i++){
            int cn = 0;
            for(int j = 0;j<f;j++){
                if(mat[i][j]==1)
                cn++;
            }
            pq.push({cn,i});
        }
        vector<int> v;
        while(k>0){
            v.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return v;

        
    }
};