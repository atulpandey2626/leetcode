class Solution {
public:
    bool isPalindrome(int x) {
        int k = x;
        long long rev = 0;
        while(x>0){
            int j = x%10;
            x = x/10;
            rev = rev*10 + j;
        }
        if(k == rev)
        return true;
        else
        return false;
    }
};