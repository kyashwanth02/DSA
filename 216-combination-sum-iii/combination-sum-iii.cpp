class Solution {
public:
    void combination(int start,int k,int n,vector<int>&current,vector<vector<int>>&result)
    {
        int sum=0;
        for(int i=0;i<current.size();i++)
        {
            sum+=current[i];
        }
        if(current.size()==k && sum==n)
        {
            result.push_back(current);
            return ;
        }
        for(int i=start;i<=9;i++)
        {
            current.push_back(i);
            combination(i+1,k,n,current,result);
            current.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>current;
        vector<vector<int>>result;
        combination(1,k,n,current,result);
        return result;
    }
};