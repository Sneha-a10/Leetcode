// Last updated: 11/18/2025, 10:29:37 PM
class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) 
    {
        int r = grid.size();
        int c = grid[0].size();
        int layer = min(r,c)/2;

        auto rotate = [&] (int l, int rot)
        {
            vector<int> ele;

            for(int i = l; i < c-l-1; i++)
                ele.push_back(grid[l][i]);
            
            for(int i = l; i < r-l-1; i++)
                ele.push_back(grid[i][c-l-1]);
            
            for(int i = c-l-1; i > l; i--)
                ele.push_back(grid[r-l-1][i]);
            
            for(int i = r-l-1; i> l; i--)
                ele.push_back(grid[i][l]);

            int t = ele.size();
            rot %= t;

            if(rot == 0) return;

            int idx = rot;

            for(int i = l; i < c-l-1; i++)
            {
                grid[l][i] = ele[idx % t];
                idx++;
            }

            for(int i = l; i < r-l-1; i++)
            {
                grid[i][c-l-1] = ele[idx % t];
                idx++;
            }
            
            for(int i = c-l-1; i > l; i--)
            {
                grid[r-l-1][i] = ele[idx % t];
                idx++;
            }
            
            for(int i = r-l-1; i> l; i--)
            {
                grid[i][l] = ele[idx % t];
                idx++;
            }
        };

        for(int i = 0; i<layer; i++)
            rotate(i,k);

        return grid;   
    }
};