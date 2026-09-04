class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int n = players.size();
        int v = trainers.size();
        int i = 0;
        int j = 0;
        while(i<n && j<v){
            if(trainers[j]>=players[i]){
                i++;
                j++;
            }
            else
            j++;
        }
        return i;
        
    }
};