// Last updated: 10/15/2025, 10:12:07 AM
class Solution {
public:
    string nextTerm(string s)
    {
        string str;
        for(int i = 0; i<s.size(); i++)
        {
            int k = 1;
            while(i<s.size()-1 && s[i]==s[i+1])
            {
                i++;
                k++;
            }
            str += to_string(k);
            str += s[i];
        }
        return str;
    }
    string countAndSay(int n) 
    {
        string s = "1";
        if(n == 1)
        return s;

        for(int i=1; i<n; i++)
        {
            s = nextTerm(s);
        }
        return s;
    }
};