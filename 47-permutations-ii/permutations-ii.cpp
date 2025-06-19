class Solution {
public:
    void permutations(vector<int>&visited,vector<int>&nums,vector<int>&current,vector<vector<int>>&result)
    {
        if(current.size()==nums.size())
        {
            result.push_back(current);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(visited[i])continue;
            if(i>0 && nums[i]==nums[i-1]&&!visited[i-1])continue;
            visited[i]=true;
            current.push_back(nums[i]);
            permutations(visited,nums,current,result);
            current.pop_back();
            visited[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>visited(nums.size(),false);
        vector<int>current;
        vector<vector<int>>result;
        permutations(visited,nums,current,result);
        return result;
    }
};