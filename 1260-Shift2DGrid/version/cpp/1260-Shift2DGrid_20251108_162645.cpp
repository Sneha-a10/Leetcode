// Last updated: 11/8/2025, 4:26:45 PM
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        if(k == 0)
            return grid;

        int r = grid.size();
        int c = grid[0].size();

        vector<int> ans;

        for(auto& i: grid)
            for(int j: i)
                ans.push_back(j);

        vector<vector<int>> res (r, vector<int> (c));  
        k %= ans.size();
        int ch = ans.size() - k;
        int t = 0;
        for(int i = 0; i<r; i++)
            for(int j = 0; j<c; j++)
            {
                if(ch < ans.size())
                    res[i][j] = ans[ch++];
                else
                    res[i][j] = ans[t++];

            }
        
        return res;
    }
};