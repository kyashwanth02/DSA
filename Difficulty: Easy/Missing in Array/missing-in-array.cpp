class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int x=arr.size()+1;
        long long sum1=1LL*x*(x+1)/2 ;
        long long sum2=0;
        for(int i=0;i<arr.size();i++)
        {
            sum2+=arr[i];
        }
        return sum1-sum2;
    }
};