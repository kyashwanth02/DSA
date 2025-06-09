class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        int rightsum=0;
        int leftsum=0;
        for(int i=0;i<arr.size();i++)
        {
            rightsum=sum-leftsum-arr[i];
            if(leftsum==rightsum)
            {
                return i;
            }
            leftsum+=arr[i];
        }
        return -1;
    }
};