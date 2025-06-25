class Solution {
  public:
    int TotalPairs(vector<int> nums, int k) {
        // Code here
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        int c=0;
        while(j< nums.size())
        {
            if(nums[j]-nums[i]==k)
            {
                c++;
                i++;
                j++;
                while(i<nums.size()&& nums[i]==nums[i-1])i++;
                while(j<nums.size()&& nums[j] == nums[j-1])j++;
            }
            else if(nums[j]-nums[i]>k)
            {
                i++;
            }
            else
            {
                j++;
            }
            if(i>=j)
            {
                j++;
            }
        }
        return c;
    }
};