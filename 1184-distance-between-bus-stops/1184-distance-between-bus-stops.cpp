class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int x = 0;
        int total = 0;

        for(int i = 0; i < distance.size(); i++) {
            total = total + distance[i];
        }

        int k = start;

        while(k != destination) {
            x = x + distance[k];
            k = (k + 1) % distance.size();
        }

        int n = total - x;

        return min(x, n);
    }
};