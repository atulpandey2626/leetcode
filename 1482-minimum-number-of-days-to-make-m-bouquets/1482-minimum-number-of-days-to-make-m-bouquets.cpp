class Solution {
public:
int fun(vector<int>& bloomDay, int m, int k,int mid){
     int b =k;
    for(int i =0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            b--;
            if(b==0){
                m--;
                if(m==0)
                return m;
                b = k;
            }
        } else b =k;

    }
    return m;

}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long v = (long long)m*k;
        if(v>bloomDay.size())
        return -1;
        int n = -1;
        int low= *min_element(bloomDay.begin(),bloomDay.end());
        int high= *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = (low+high)/2;
            int b = fun(bloomDay,m,k,mid);
            if(b==0){
                n =mid;
                high =mid-1;
            } else low=mid+1;

        }
        return n;
        
    }
};