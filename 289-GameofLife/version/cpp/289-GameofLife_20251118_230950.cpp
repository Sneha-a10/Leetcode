// Last updated: 11/18/2025, 11:09:50 PM
class Solution {
public:
    int neighbours (vector<vector<int>>& board, int i, int j)
    {
        int n = 0;
        if(i>0 && j>0 && board[i-1][j-1] == 1) n++; 
        if(i>0 && board [i-1][j] == 1) n++;
        if(i>0 && j+1<board[0].size() && board [i-1][j+1] == 1) n++;
        if(j>0 && board [i][j-1] == 1) n++;
        if(j+1<board[0].size() && board [i][j+1] == 1) n++;
        if(i+1<board.size() && j>0 && board [i+1][j-1] == 1) n++;
        if(i+1<board.size() && board [i+1][j] == 1) n++;
        if(i+1<board.size() && j+1<board[0].size() && board [i+1][j+1] == 1) n++;
        return n;
    }
    void gameOfLife(vector<vector<int>>& board) 
    {
        vector<vector<int>> gird = board;
        for(int i = 0; i<board.size(); i++)
            for(int j = 0; j<board[0].size(); j++)
            {
                if( board[i][j] == 0)
                {
                    if (neighbours(gird,i,j) == 3)
                    board[i][j] = 1;
                }
                else
                {
                    if(neighbours(gird,i,j) < 2|| neighbours(gird,i,j) > 3)
                    board[i][j] = 0;
                    else
                    board[i][j] = 1;     
                }

            }
    }
};