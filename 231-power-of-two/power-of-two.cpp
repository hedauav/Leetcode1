class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==8){
            return true;
        }
        for(int i=0;i<=pow(n,0.5);i++){
            if(pow(2,i)==n){
                return true;
            }
        }
        return false;
    }
};