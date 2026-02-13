// Last updated: 2/13/2026, 12:58:50 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<char>  check;
        
        int  r = 0;
        int ans = 0;

        for(; r < s.size(); r++)
        {
            while(count(check.begin(), check.end(),s[r]))
                check.erase(check.begin());
                
            check.push_back(s[r]);
            ans = max(ans, (int)check.size());
        }
        return ans;
    }
};