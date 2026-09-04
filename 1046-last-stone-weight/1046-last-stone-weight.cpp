class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i = 0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int t = pq.top();
            pq.pop();
            int k = pq.top();
            pq.pop();
            if(t != k)
            pq.push(t - k);
            if(pq.empty())
            return 0;
        }
        return pq.top();
        
    }
};