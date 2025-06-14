class Solution {
public:
    static bool compare(pair<char,int>&a,pair<char,int>&b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<pair<char,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),compare);
        string k="";
        for(int i=0;i<v.size();i++)
        {
            int ch=v[i].first;
            int c=v[i].second;
            for(int j=0;j<c;j++)
            {
                k+=ch;
            }
        }
        return k;
    }
};