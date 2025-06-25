class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mp;
        unordered_map<char,int>v;
        vector<int>res;
        for(int i=0;i<p.length();i++)
        {
            mp[p[i]]++;
        }
        int windowsize=p.length();
        for(int i=0;i<windowsize;i++)
        {
            v[s[i]]++;
        }
        if(v==mp)res.push_back(0);
        for(int i=windowsize;i<s.length();i++)
        {
            v[s[i]]++;
            v[s[i-p.length()]];
            char ch=s[i-p.length()];
            v[ch]--;
            if(v[ch]==0)
            {
                v.erase(ch);
            }
             if(mp==v)
            {
                res.push_back(i-p.length()+1);
            }
        }
        return res;
    }
};