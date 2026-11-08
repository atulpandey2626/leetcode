class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> v;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                int k = matrix[i][j];
                bool rows = true;
                bool columns = true;
                for(int row = 0;row<matrix[0].size();row++){
                    if(k>matrix[i][row])
                    rows = false;
                }
                for(int colm = 0;colm<matrix.size();colm++){
                    if(k<matrix[colm][j])
                    columns = false;
                }
                if(rows && columns)
                v.push_back(k);
            }
        }
        return v;
    }
};