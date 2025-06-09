class Solution {
public:
    bool isValid(string s) {
        stack<char>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]== '[')
            {
                v.push(s[i]);
            }
            else
            {
                if(v.empty()) return false;
                else
                {
                    char top=v.top();
                    if(s[i]==')' && top!='(' || s[i]=='}' && top!='{' || s[i]==']' && top!='[') return false;
                }
                v.pop();
            }
        }
        return v.empty();
    }
};