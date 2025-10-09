// Last updated: 10/9/2025, 12:30:11 PM
class Solution {
public:
    string reverseVowels(string s) 
    {
        int l = 0, r = s.size()-1;
        unordered_set <char> v = {'A','E','I','O','U','a','e','i','o','u'};
        while(l<r)
        {
            while(l<r && v.find(s[l]) == v.end())
            l++;
            while(l<r && v.find(s[r]) == v.end())
            r--;

            swap(s[l], s[r]);
            l++; r--;
        }
        return s;
    }
};