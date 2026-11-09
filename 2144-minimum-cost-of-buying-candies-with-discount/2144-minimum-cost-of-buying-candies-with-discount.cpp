class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int k = 0;
        int v = 2;
        int n = 0;
        for(int i = cost.size() - 1;i>=0;i--){
            if(v==0 && n>cost[i]){
                n = 0;
                v = 2;
                continue;
            }
            if(v!=0){
                n = n + cost[i];
                k = k + cost[i];
                v--;
            }
        }

        return k;
        
    }
};