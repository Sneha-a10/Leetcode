// Last updated: 10/20/2025, 5:55:35 PM
class Solution {
public:
    int countBinarySubstrings(string s) 
    {
        vector<int> ans;
        int i = 0, j = i;
        while(j<s.size())
        {
            int c = 0;
            while(s[i]==s[j]) 
            {
                j++;
                c++;
            }
            i = j;
            ans.push_back(c);
        }
        i = 0;
        for(int n =0; n<ans.size()-1; n++)
            i += min(ans[n], ans[n+1]);
        
        return i;
    }
};