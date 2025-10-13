// Last updated: 10/13/2025, 12:23:49 PM
class Solution {
public:
    bool isPalindrome(string s) 
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string r;
        for (char c : s)
            if(isalnum(c))
                r +=c;

        for( int i = 0, j = r.size()-1; i<=j; i++,j--)
            if(r[i] !=r[j])
                return false;

        return true;
    }
};