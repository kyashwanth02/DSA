class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int i=0;
        int c=0;
        int maxi=0;
        for(int j=0;j<s.length();j++)
        {
            mp[s[j]]++;
            c=max(c,mp[s[j]]);
            int windowsize=j-i+1;
            if(windowsize-c >k)
            {
                mp[s[i]]--;
                i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};