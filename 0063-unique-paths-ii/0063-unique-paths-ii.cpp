class Solution {
public:
int dp[101][101];
int solve(int i,int j,int m, int n,vector<vector<int>>& obstacleGrid){
    if(obstacleGrid[m-1][n-1]==1)
    return 0;
    if(i==m-1&&j==n-1)
    return 1;
    if(i>=m || j>=n)
    return 0;
    if(obstacleGrid[i][j] == 1)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    return dp[i][j] = (solve(i+1,j,m,n,obstacleGrid) + solve(i,j+1,m,n,obstacleGrid));
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,m,n,obstacleGrid);
        
    }
};