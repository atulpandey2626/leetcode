class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> a;
        priority_queue <pair<int,int>> pq;
        for(int i = 0;i<points.size();i++){
           int n = points[i][0]*points[i][0] + points[i][1]*points[i][1];
           pq.push({n,i});
           if(pq.size()>k)
           pq.pop();
        }
        while(!pq.empty()){
            int d = pq.top().second;
            a.push_back({points[d][0],points[d][1]});
            pq.pop();
        }
        return a;
        
    }
};