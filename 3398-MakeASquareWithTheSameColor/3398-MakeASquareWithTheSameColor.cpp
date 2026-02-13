// Last updated: 2/13/2026, 12:55:31 PM
class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) 
    {
        for(int i = 0; i<grid.size()-1; i++)
            for(int j = 0; j<grid.size()-1; j++)
            {
                int b =0, w =0;

                for(int x = 0; x<2; x++)
                    for(int y = 0 ; y<2; y++)
                    {
                        if(grid[x+i][y+j] == 'B') b++;
                        else w++;
                    }

                if (b > 2 || w > 2) return true;
            }


        return false;
    }
};