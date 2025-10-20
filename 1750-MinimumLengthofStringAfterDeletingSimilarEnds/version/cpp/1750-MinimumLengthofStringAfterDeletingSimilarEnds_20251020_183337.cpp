// Last updated: 10/20/2025, 6:33:37 PM
class Solution {
public:
    int minimumLength(string s) 
    {
        int i = 0, j = s.size()-1;
        while(i<j && s[i] == s[j])
        {
            while(i<j && s[i] == s[i+1]) i++;
            while(j>i && s[j] == s[j-1]) j--;
            if(s[i] == s[j])
            {
                i++; j--;
            }
        }
        return max(0,j-i+1);
    }
};