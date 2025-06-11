// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=k)
            {
                c++;
            }
        }
        int bad=0;
        for(int i=0;i<c;i++)
        {
            if(arr[i]>k)bad++;
        }
        int ans=bad;
        for(int i=0,j=c;i<arr.size(),j<arr.size();i++,j++)
        {
            if(arr[i]>k)bad--;
            if(arr[j]>k)bad++;
            ans=min(bad,ans);
        }
        return ans;
    }
};
