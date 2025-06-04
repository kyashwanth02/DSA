class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto& j: mp)
        {
            if(j.second==1)
            {
                return j.first;
            }
        }
        return -1;
    }
};