class Solution {
public:
    bool isPalindrome(int x) {
        int k = x;
        long long z = 0;
        while(x>0){
            int y = x%10;
            z = z*10 + y;
            x = x/10;
        }
        if(z==k)
        return true;

        return false;
        
    }
};