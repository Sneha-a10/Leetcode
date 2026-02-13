// Last updated: 2/13/2026, 12:56:41 PM
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int r, int c) 
    {
        vector<vector<int>> ans;
        
        for(int d = 0; d<= max(r,rows-1-r)+max(c,cols-1-c); d++)
            for(int i = 0; i<rows; i++)
                for(int j = 0; j<cols; j++)
                    if(abs(r-i)+abs(c-j)==d)
                        ans.push_back({i,j});

        return ans;
    }
};