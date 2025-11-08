// Last updated: 11/8/2025, 4:04:34 PM
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        if(k == 0)
            return grid;

        int r = grid.size();
        int c = grid[0].size();

        vector<vector<int>> res(r, vector<int> (c));
        for(int t=0;t<k;t++)
        {
            res[0][0] = grid[r-1][c-1];
            for(int i = 0; i<r; i++)
            {
                for(int j = 0; j<c; j++)
                {
                    if(j > 0) res[i][j] = grid[i][j-1];
                    else if (j == 0 && i > 0) res[i][j] = grid[i-1][c-1];
                }
            }
            for(int i=0; i<r; i++)
                for(int j=0; j<c; j++)
                    grid[i][j] = res[i][j];
        }
        return res;

    }
};