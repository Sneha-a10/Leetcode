// Last updated: 2/13/2026, 12:55:30 PM
class Solution {
public:
    bool isY (int i, int j, int n)
    {
        return ((i<=n/2 && (i == j || i+j == n-1)) || (i > n/2 && j == n/2));
    }
    int minimumOperationsToWriteY(vector<vector<int>>& grid) 
    {
        vector<int> ymap(3,0);
        vector<int> map(3,0);
        int ty = 0;
        int t = 0;

        for(int i = 0; i<grid.size(); i++)
            for(int j = 0; j<grid.size(); j++)
            {
                if(isY(i,j,grid.size()))
                {
                    ymap[grid[i][j]]++;
                    ty++;
                }
                else
                {
                    map[grid[i][j]]++;
                    t++;
                }
            }
        
        int res = t+ty;

        for(int i = 0; i<3; i++)
            for(int j = 0; j<3; j++)
                if(i!=j)
                {
                    int flip = (ty - ymap[i]) + (t - map[j]);
                    res = min( res, flip);
                }

        return res;
    }
};