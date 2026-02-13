// Last updated: 2/13/2026, 12:57:21 PM
class Solution {
public:
    void reverseString(vector<char>& s)
    {
        for(int i = 0, j = s.size()-1; i<s.size()/2; i++, j--)
        {
            swap(s[i],s[j]);
        }
    }
};