// Last updated: 10/14/2025, 11:52:33 AM
class Solution {
public:
    vector<int> shortestToChar(string s, char c)
    {
        vector<int> ans;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == c)
            ans.push_back(0);
            else
            {
                int j = i-1, pos1 = s.size(), pos2 = s.size();
               
                while(j>=0)
                {
                    // pos1 ++;
                    if(s[j] == c)
                    {
                        pos1 = i-j;
                        break;
                    }
                    j--;
                }

                j = i+1;

                while(j<s.size())
                {
                    // pos2++;
                    if(s[j] == c)
                    {
                        pos2 = j - i;
                        break;
                    }
                    j++;
                }
                ans.push_back(min(pos1,pos2));
            }
        }
        return ans;
    }
};