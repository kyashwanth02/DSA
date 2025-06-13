class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto num:mp)
        {
            if(num.second==2)
            {
                v.push_back(num.first);
            }
        }
        return v;
    }
};