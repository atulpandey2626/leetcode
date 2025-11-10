class Solution {
public:
long long num = 0;
    bool isPalindrome(int x) {
        int a = x;
        while(x>0)
       { int y = x%10;
        num = num*10 + y;
        x = x/10;
} if (num == a)
return true;
else
return false;

        
    }
};