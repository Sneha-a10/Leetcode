// Last updated: 11/11/2025, 10:05:03 PM
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) 
    {
        int n = boxGrid.size();
        int m = boxGrid[0].size();

        vector<vector<char>> ans;
        for(int i=0; i<n; i++)
        {
            vector<char> an (m, '.');
            int p = m-1;
            for(int j = m-1; j>=0; j--)
            {
                if(boxGrid[i][j] == '#') an[p--] = '#';
                else if (boxGrid[i][j] == '*') 
                {
                    p = j-1;
                    an[j] = '*';
                }
            }
            ans.push_back(an);
        }

        vector<vector<char>> res (m, vector<char> (n));

        for(int i =0; i<n; i++)
            for(int j =0; j<m; j++)
                res[j][n-1-i] = ans[i][j];

        return res;

    }
};