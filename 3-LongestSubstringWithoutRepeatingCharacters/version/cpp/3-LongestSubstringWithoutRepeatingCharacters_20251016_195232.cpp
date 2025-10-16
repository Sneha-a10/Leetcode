// Last updated: 10/16/2025, 7:52:32 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<char>  check;
        
        int l = 0, r = 0;
        int ans = 0;

        for(; r < s.size(); r++)
        {
            while(count(check.begin(), check.end(),s[r]))
            {
                l++;
                check.erase(check.begin());
            }
            check.push_back(s[r]);
            ans = max(ans, (int)check.size());
        }
        return ans;
    }
};