// Last updated: 2/13/2026, 12:55:32 PM
class Solution {
public:
    int minimumArea(vector<vector<int>>& grid)
    {
        int i2 = -1, i1 = grid.size(), j2 = -1, j1 = grid[0].size();
        for(int i = 0; i< grid.size(); i++)
            for(int j = 0; j<grid[0].size(); j++)
               if(grid[i][j] == 1) 
                {
                    i1 = min(i1, i);
                    i2 = max(i2, i);
                    j1 = min(j1, j);
                    j2 = max(j2, j);
                }
        return (i2-i1+1)*(j2-j1+1);
    }
};