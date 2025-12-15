class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0;
        int n = prices[0];
        for(int i = 0;i<prices.size();i++){
            int k = prices[i]-n;
            p = max(p,k);
            n = min(n,prices[i]);
        }
        return p;

    }
};