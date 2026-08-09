class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> m;

        for(int i = 0; i < tasks.size(); i++) {
            m[tasks[i]]++;
        }

        priority_queue<int> pq;

        for(auto it : m) {
            pq.push(it.second);
        }

        int a = 0;

        while(!pq.empty()) {
            vector<int> temp;

            for(int i = 0; i <= n; i++) {

                if(!pq.empty()) {
                    int f = pq.top();
                    pq.pop();

                    f--;

                    if(f > 0)
                        temp.push_back(f);
                }

               
                a++;

                
                if(pq.empty() && temp.empty())
                    return a;
            }

            for(auto it : temp) {
                pq.push(it);
            }
        }

        return a;
    }
};