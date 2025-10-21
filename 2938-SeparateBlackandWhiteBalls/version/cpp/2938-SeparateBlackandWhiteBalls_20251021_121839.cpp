// Last updated: 10/21/2025, 12:18:39 PM
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