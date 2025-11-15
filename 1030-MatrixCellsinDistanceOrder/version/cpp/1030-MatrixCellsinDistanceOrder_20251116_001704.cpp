// Last updated: 11/16/2025, 12:17:04 AM
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int r, int c) {
        vector<vector<int>> ans;
        int i,j,d;
        for(d=0;d<=max(r,rows-1-r)+max(c,cols-c-1);d++)
        {
            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    if((abs(r-i)+abs(c-j))==d) ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};