class Solution {
public:
    long long reverse(long long x) {
        long long k = x;
        if(x<0) x =-x;
        long long rev = 0;
        while(x>0){
            int j = x%10;
            x = x/10;
            rev = rev*10 + j;
        }
        if(rev>INT_MAX -1 || rev<INT_MIN)
        return 0;
        if(k<0)
        return -rev;
        else
        return rev;
        
    }
};