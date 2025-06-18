class Solution {
public:
    void valid(int open,int close,int n,string s,vector<string>&v)
    {
        if(open==n && close==n)
        {
            v.push_back(s);
            return ;
        }
        if(open<n)
        {
             valid(open+1,close,n,s+"(",v);
        }
        if(close<open)
        {
             valid(open,close+1,n,s+")",v);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        valid(0,0,n,"",v);
        return v;
    }
};