// Last updated: 2/13/2026, 12:55:38 PM
class Solution {
public:
    long long minimumSteps(string s) 
    {
        long long i = 0, c = 0,j =0;
        while(i<s.size())
        {
            if(s[i]=='0')
                c +=j;
            else
                j++;
            i++;
        }
        return c;
    }
};