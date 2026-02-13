// Last updated: 2/13/2026, 12:57:32 PM
#include <algorithm>
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map <char, int> ss, tt;

        for(char c: s) ss[c] ++;
        for(char c: t) tt[c] ++ ;

        if(ss==tt)
            return true;
        return false;
    }
};