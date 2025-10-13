// Last updated: 10/13/2025, 4:06:47 PM
class Solution {
public:
    bool palin( int l , int h, string s)
    {
        for(int i = l, j = h ; i<=j; i++, j--)
        {
            if(s[i] != s[j])
            return false;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int c = 0, i =0, j = s.size()-1;
        while(i<=j)
        {
            if(s[i] != s[j])
            {
                c++;
                return (palin(i+1, j , s) || palin(i , j-1, s));

            }
            i ++; j--;
        }
        return true;
    }
};