// User function template for C++

class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
        
        long long sum2=0;
        int MOD = 1e9 + 7;
        for(int i=0;i<arr.size();i++)
        {
            long long l=i+1;
            long long r=arr.size()-i;
            sum2+=(long long)arr[i]*l*r;
        }
        return sum2%MOD;
    }
};