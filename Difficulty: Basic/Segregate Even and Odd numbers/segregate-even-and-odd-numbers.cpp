class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        vector<int>v;
        vector<int>w;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2 ==0)
            {
                v.push_back(arr[i]);
                
            }
            else
            {
                w.push_back(arr[i]);
                 
            }
        }
        sort(v.begin(),v.end());
        sort(w.begin(),w.end());
        int j=0;
        for(int i=0;i<v.size();i++)
        {
            arr[j]=v[i];
            j++;
        }
        for(int i=0;i<w.size();i++)
        {
            arr[j]=w[i];
            j++;
        }
    }
};