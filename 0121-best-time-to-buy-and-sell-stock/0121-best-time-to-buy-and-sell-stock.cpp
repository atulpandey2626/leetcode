class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = INT_MAX;
        int p = 0;
        for(int i = 0;i<prices.size();i++){
            m = min(m,prices[i]);
            int k = prices[i] - m;
            p = max(p,k);
        }
        return p;
        
    }
};