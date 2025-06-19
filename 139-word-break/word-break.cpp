class Solution {
public:
    bool wordBreak(string s, vector<string>wordDict)
    {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        unordered_map<string, bool> memo;
        return canBreak(s, dict,memo);
    }
    bool canBreak(string s, unordered_set<string>& dict, unordered_map<string, bool>& memo)
    {
        if(s.empty())
        {
            return true;
        }
        if (memo.find(s) != memo.end()) {
            return memo[s]; 
        }
        for(int i=1;i<=s.length();i++)
        {
            string prefix=s.substr(0,i);
            string suffix=s.substr(i);
            if(dict.find(prefix)!=dict.end())
            {
                if(canBreak(suffix,dict,memo))
                {
                    return true;
                }
            }
        }
        memo[s] = false;
        return false;
    }
};