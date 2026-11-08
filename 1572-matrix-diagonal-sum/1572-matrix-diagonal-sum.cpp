class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int j = 0;
        for(int i = 0;i<mat.size();i++){
            sum = sum + mat[i][j];
            j++;
        }
        for(int i = 0;i<mat.size();i++){
            if(i == mat.size() - 1 - i )
            {
            continue;}
            sum = sum + mat[i][mat.size() - 1 - i];
        }

        
        return sum;

    }
};