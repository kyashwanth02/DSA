class Solution {
public:
    void combination(int start,vector<int>& candidates, int target,vector<int>&current,vector<vector<int>>&result)
    {
        int sum=0;
        for(int i=0;i<current.size();i++)
        {
            sum+=current[i];
        }
        if(sum == target)
        {
            result.push_back(current);
            return ;
        }
        if(sum > target)
        {
            return ;
        }
        for(int i=start;i<candidates.size();i++)
        {
            current.push_back(candidates[i]);
            combination(i,candidates,target,current,result);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>>result;
        combination(0,candidates,target,current,result);
        return result;
    }
};