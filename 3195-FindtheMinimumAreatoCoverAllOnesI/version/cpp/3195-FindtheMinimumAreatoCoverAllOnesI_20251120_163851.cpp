// Last updated: 11/20/2025, 4:38:51 PM
class Solution {
public:
    int minimumArea(vector<vector<int>>& grid)
    {
        int i1 = -1, i2 = grid.size(), j1 = -1, j2 = grid[0].size();
        for(int i = 0; i< grid.size(); i++)
            for(int j = 0; j<grid[0].size(); j++)
               if(grid[i][j] == 1) 
                {
                    if (i1 == -1) 
                    {
                        i1 = i;
                        j1 = j;
                        j2 = j;
                    }
                    if (j < j1) j1 = j;
                    i2 = i;
                    if (j > j2) j2 = j;
                }
        cout << "i1:"<<i1 <<" i2:"<<i2<<" j1:"<<j1<<" j2:"<<j2;
        return (i2-i1+1)*(j2-j1+1);
    }
};