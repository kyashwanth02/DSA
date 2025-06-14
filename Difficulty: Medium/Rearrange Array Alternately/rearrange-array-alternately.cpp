class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        int i=0;
        int j=arr.size()-1;
        sort(arr.begin(),arr.end());
        vector<int>v;
        while(i<=j)
        {
            v.push_back(arr[j]);
            if(i!=j)
            {
                v.push_back(arr[i]);
            }
            j--;
            i++;
        }
        arr=v;
    }
};