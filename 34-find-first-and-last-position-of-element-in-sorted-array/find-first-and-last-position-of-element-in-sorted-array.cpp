class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int f=-1;
        while(l<=h)
        {
            int mid=(l+h)/2 ;
            if(nums[mid]==target)
            {
                f=mid;
                h=mid-1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        l=0;
        h=nums.size()-1;
        int p=-1;
        while(l<=h)
        {
            int mid=(l+h)/2 ;
            if(nums[mid]==target)
            {
                p=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return {f,p};
    }
};