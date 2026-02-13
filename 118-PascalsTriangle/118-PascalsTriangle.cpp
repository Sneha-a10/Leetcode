// Last updated: 2/13/2026, 12:58:00 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans;

        for(int i = 0; i<numRows; i++)
        {
            vector<int> a;
            a.push_back(1);
            int an = 1;
            for(int j = 1; j<i+1; j++)
            {
                an *= (i+1-j);
                an /= j;
                a.push_back(an);
            }
            ans.push_back({a});
        }
        return ans;
    }
};