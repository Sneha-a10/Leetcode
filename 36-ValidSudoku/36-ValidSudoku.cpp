// Last updated: 2/13/2026, 12:58:23 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for(int i = 0; i<9; i++)
        {
            for(int j = 0; j<9; j++)
                if(board[i][j]!= '.')
                {
                    int cnt = 0;

                    for(int k = 0; k<9; k++)
                    {
                        if(board[i][j] == board[i][k]) cnt++;
                        if(board[i][j] == board[k][j]) cnt++;
                    }

                    int x = (i/3) *3;
                    int y = (j/3) *3;

                    for(int k = x; k < x+3; k++)
                        for(int l = y; l < y+3; l++)
                            if(board[i][j] == board[k][l]) cnt++;
                    
                    if (cnt > 3) return false;
                }
        }

        return true;
    }
};