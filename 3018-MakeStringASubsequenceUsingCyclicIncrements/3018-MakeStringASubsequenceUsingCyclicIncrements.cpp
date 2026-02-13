// Last updated: 2/13/2026, 12:55:39 PM
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) 
    {
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