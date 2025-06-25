class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>prefixcount;
        prefixcount[0]=1;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(prefixcount.find(sum-goal)!=prefixcount.end())
            {
                count+=prefixcount[sum-goal];
            }
            prefixcount[sum]++;
        }
        return count;
    }
};