class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int i = 0 ,j = 0, k = 0;
        sort(tasks.begin(),tasks.end());
        sort(processorTime.begin(), processorTime.end(), greater<int>());
        while(j<processorTime.size()){
            int d = 0;int h = 0;
            for(int t = i;t<tasks.size();t++){
                if(h==4)
                break;
                d = max(d,processorTime[j]+tasks[t]);
                i++;
                h++;
            }
            k = max(k,d);
            j++;
        }
        return k;
        
    }
};