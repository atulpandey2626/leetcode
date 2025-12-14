class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        if(matrix.empty())
        return;

        vector <int> v (r,0) , b (c,0);

        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(matrix[i][j]==0){
                    v[i] = 1;
                    b[j] = 1;
                }
            }
        }
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(v[i]==1 || b[j]==1){
                   matrix[i][j] = 0;
                }
            }
        }
        
    }
};