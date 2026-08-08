class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> v;
        for(int i = 0;i<speed.size();i++){
            v.push_back({efficiency[i],speed[i]});
        }
        sort(v.begin(), v.end(), greater<pair<int,int>>());
        priority_queue<int , vector<int>, greater<int>> pq;
        long long totalspeed = 0;
        long long answer = 0;
        for(int i = 0;i<v.size();i++){
            int eff = v[i].first;
            int speed = v[i].second;
            totalspeed += speed;
            pq.push(speed);
            if(pq.size()>k){
                totalspeed -= pq.top();
                pq.pop();
            }
            answer = max(answer,totalspeed*eff);
        }
        return answer% 1000000007;
        
    }
};