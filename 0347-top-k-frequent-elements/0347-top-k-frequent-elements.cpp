class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> v;
        vector<int> h;
        for(int i = 0;i<nums.size();i++){
            v[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto it : v){
            pq.push({it.second,it.first});
            if(pq.size()>k)
            pq.pop();
        } 
        while(!pq.empty()){
            int n = pq.top().second;
            h.push_back(n);
            pq.pop();
        }
        return h;
        
    }
};