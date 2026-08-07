class Solution {
public:
static bool cmp(vector<int>&a , vector<int> &b){
    return a[1]<b[1] ;
}
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),cmp);
        priority_queue<int> pq;
        int total = 0;
        for(int i = 0;i<courses.size();i++){
            total += courses[i][0];
            pq.push(courses[i][0]);
            if(total>courses[i][1]){
                total -=pq.top();
                pq.pop();
            }
           
        }
        return pq.size();
        

    }
};