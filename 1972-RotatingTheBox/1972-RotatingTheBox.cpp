// Last updated: 2/13/2026, 12:56:14 PM
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) 
    {
        int n = boxGrid.size();
        int m = boxGrid[0].size();

        for(int i = 0; i<n; i++)
        {
            int c = m-1;
            for(int j = m-1; j>=0; j--)
            {
                if(boxGrid[i][j] == '#')
                {
                    boxGrid[i][c] = '#';
                    if(c!=j)
                        boxGrid[i][j] = '.';
                    c--;
                }
                else if(boxGrid[i][j] == '*')
                    c = j-1;
            }
        }

        vector<vector<char>> res (m, vector<char> (n, '.'));

        for(int i =0; i<n; i++)
            for(int j =0; j<m; j++)
                res[j][n-1-i] = boxGrid[i][j];

        return res;

    }
};