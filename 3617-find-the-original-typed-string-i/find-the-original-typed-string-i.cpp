class Solution {
public:
    int possibleStringCount(string word) {
        int c=1;
        for(int i=1;i<word.length();i++)
        {
            if(word[i]==word[i-1])
            {
                c++;
            }
        }
        return c;
    }
};