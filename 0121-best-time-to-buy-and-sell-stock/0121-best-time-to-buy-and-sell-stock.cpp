class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int p = 0;
        for(int i = 0; i<prices.size(); i++){
            int n = prices[i] - mini;
            p = max(n,p);
            mini = min(prices[i],mini);
        }
        return p;
        
    }
};