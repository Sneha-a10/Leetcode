// Last updated: 10/20/2025, 12:46:52 PM
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) 
    {
        if(str2.size()>str1.size())
            return false;
        int i = 0;
        for( char c : str1)
        {
            char ch = (c == 'z') ? 'a' : c+1;
    
            if(i< str2.size() && (str2[i] == c|| str2[i] == ch))
                i++;
        }
        return i == str2.size();
    }
};