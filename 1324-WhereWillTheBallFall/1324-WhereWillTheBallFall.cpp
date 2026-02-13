// Last updated: 2/13/2026, 12:56:38 PM
class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> res (m,1);
        for(int j = 0; j<m; j++)
        {
            int i = 0, k = j;
            while(i<n && k>=0 && k < m)
            {
                if(grid[i][k] == 1) 
                {
                    if (k < m-1 && grid[i][k+1] == 1)
                        k++;
                    else
                    {
                       res[j] = -1;
                       break;
                    }
                }
                else
                {
                    if (k >0 && grid[i][k-1] == -1)
                        k--;
                    else
                    {
                        res[j] = -1;
                        break;
                    }
                }  
                i++;
            }
            if(res[j] == 1) res[j] = k;
        }
        return res;
    }
};