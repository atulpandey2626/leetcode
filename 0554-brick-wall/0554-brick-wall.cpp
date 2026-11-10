class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int sum = 0;
        map<long long,int> mp;

        for(int i = 0; i < wall.size(); i++){
            long long k = 0;

            for(int j = 0; j < wall[i].size() - 1; j++){
                k = k + wall[i][j];
                mp[k]++;
            }
        }

        for(auto x : mp){
            if(x.second > sum)
                sum = x.second;
        }

        return wall.size() - sum;
    }
};