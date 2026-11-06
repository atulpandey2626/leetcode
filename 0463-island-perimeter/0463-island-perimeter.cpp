class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int k = grid[0].size();
        int a = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){

                if(grid[i][j] == 1){

                    if(i == 0 || grid[i-1][j] == 0)
                        a++;

                    if(j == k-1 || grid[i][j+1] == 0)
                        a++;

                    if(i == n-1 || grid[i+1][j] == 0)
                        a++;

                    if(j == 0 || grid[i][j-1] == 0)
                        a++;
                }
            }
        }

        return a;
    }
};