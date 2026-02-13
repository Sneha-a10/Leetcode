// Last updated: 2/13/2026, 12:57:56 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set <int> s (nums.begin(), nums.end());
        int c = 0, m = 0;
        for(int i : s)
        {
            if(s.find(i-1) == s.end())
                while(s.find(i) != s.end())
                {
                    i++;
                    c++;
                }
            m = max(c,m);
            c = 0;
        }
        return max(m,c);
    }
};