// Last updated: 10/19/2025, 10:52:49 PM
class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
        int l = s.size();
        vector <int> ans;
        int i = 0;
        for(int c = 0 ; c<s.size(); c++)
        {
            if(s[c] == 'I')
            {
                ans.push_back(i);
                i++;
            }
            else
            {
                ans.push_back(l);
                l--;
            }
        }
        if(s[s.size()]=='I')
            ans.push_back(i);
        else
            ans.push_back(l);

        return ans;
    }
};