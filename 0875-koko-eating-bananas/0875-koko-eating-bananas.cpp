class Solution {
public:
int func(vector<int>& piles, int h, int mid){
    for(int i = 0; i < piles.size(); i++){
        
        h -= (piles[i] + mid - 1) / mid;   

        if(h < 0)
            break;
    }
    return h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int n = -1;
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());

    while(low <= high){
        int mid = (low + high) / 2;
        long long b = func(piles, h, mid);

        if(b >= 0){
            n = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return n;
}
};
