class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int k = 0;
        int large = neededTime[0];
        for(int i = 1;i<colors.size();i++){
            if(colors[i]==colors[i-1]){
                k += min(neededTime[i],large);
                large =max(neededTime[i],large);
            }
            else large = neededTime[i];

        }
        return k;

        
    }
};