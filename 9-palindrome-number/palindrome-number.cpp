class Solution {
public:
    bool isPalindrome(int x) {
        int digit=0;
        long long rev=0;
        int original = x;
        if(x<0){
            return false;
        }
        while(x!=0){
            digit = x % 10;
            rev = rev * 10 +digit;
            x=x/10;
        }
        if(rev == original){
            return true;
        }
        return false;
    }

};