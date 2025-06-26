class Solution {
public:
    int atMostK(vector<int>& nums, int k)
    {
         unordered_map<int,int>mp;
        int left=0;
        int result=0;
        for(int right=0;right<nums.size();right++)
        {
            if(mp[nums[right]]==0)
            {
                k--;
            }
            mp[nums[right]]++;
            while(k<0)
            {
                mp[nums[left]]--;
                if(mp[nums[left]]==0)
                {
                    k++;
                }
                left++;
            }
            result+=(right-left+1);
        }
        return result;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};