class Solution {
public:
    bool isPowerOfTwo(long long n) {
        if(n<=0)return false;
        if(n==1)return true;
        if(n%2 !=0)return false;
        return isPowerOfTwo(n/2);
    }
};