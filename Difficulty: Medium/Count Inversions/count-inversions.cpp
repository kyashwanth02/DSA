
class Solution {
  public:
    // Function to count inversions in the array.
    int merge(vector<int>& arr,int st,int mid,int en)
    {
        vector<int>v;
        int i=st;
        int j=mid+1;
        int c=0;
        while(i<=mid && j<=en)
        {
            if(arr[i]<=arr[j])
            {
                v.push_back(arr[i]);
                i++;
            }
            else
            {
                v.push_back(arr[j]);
                c+=mid-i+1;
                j++;
            }
        }
        while(i<=mid)
        {
            v.push_back(arr[i]);
            i++;
        }
        while(j<=en)
        {
            v.push_back(arr[j]);
            j++;
        }
        for(int i=0;i<v.size();i++)
        {
            arr[st+i]=v[i];
        }
        return c;
    }
    int mergesort(vector<int>&arr,int st,int en){
    if(st>=en) return 0;
    int mid=st+(en-st)/2 ;
    int c=0;
    c+=mergesort(arr,st,mid);
    c+=mergesort(arr,mid+1,en);
    c+=merge(arr,st,mid,en);
    return c;
    }
    int inversionCount(vector<int> &arr) {
        return mergesort(arr,0,arr.size()-1);
    }
};

