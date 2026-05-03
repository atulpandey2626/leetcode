class Solution {
public:
    int reverse(int x) {
        long long z = 0;
        while(x!=0){
            int y = x%10;
            z = z*10 + y;
            x = x/10;
        }
        if(z>INT_MAX || z<INT_MIN)
        return 0;

        return z;
        
    }
};