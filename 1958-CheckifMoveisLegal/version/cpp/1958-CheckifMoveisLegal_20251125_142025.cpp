// Last updated: 11/25/2025, 2:20:25 PM
class Solution {
public:
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) 
    {
        char opp = (color == 'B' ? 'W' : 'B');
        for(int i = -1; i<=1; i++)
            for(int j = -1; j<=1; j++)
            {
                if(i == 0 && j == 0) continue;

                int x = rMove + i;
                int y = cMove + j;

                if(x < 0 || x >= 8 || y < 0 || y >= 8) continue;
                if(board[x][y] == color) continue;
                if(board[x][y] != opp) continue;

                x+=i;
                y+=j;

                while(x >= 0 && x < 8 && y >= 0 && y < 8)
                {
                    if(board[x][y] == opp)
                    {
                        x+=i;
                        y+=j;
                    }
                    else break;
                }

                if (x >= 0 && x < 8 && y >= 0 && y < 8 && board[x][y] == color)
 return true;
            }

        return false;    
    }
};