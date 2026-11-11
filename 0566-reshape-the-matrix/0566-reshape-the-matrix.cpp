class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int k = mat[0].size();
        if(n*k != r*c)
        return mat;
        vector<vector<int>> v(r,vector<int>(c));
        vector<int> vect;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<k;j++){
                vect.push_back(mat[i][j]);
            }
        }
        int sum = 0;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                v[i][j] = vect[sum];
                sum++;
            }
        }

        return v;

        
    }
};