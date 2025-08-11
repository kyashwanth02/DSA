class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>v(n+1,0);
        for(auto & it:trust)
        {
            int a=it[0],b=it[1];
            v[a]--;
            v[b]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(v[i]==n-1)return i;
        }
        return -1;
    }
};