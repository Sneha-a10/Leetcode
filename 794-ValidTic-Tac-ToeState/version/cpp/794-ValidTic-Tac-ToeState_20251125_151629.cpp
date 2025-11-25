// Last updated: 11/25/2025, 3:16:29 PM
class Solution {
public:
    bool winner (vector<string>& board, char p)
    {
        for (int  i = 0; i<3; i++) 
        {
            if(board[i][0] == p && board[i][1] == p && board[i][2] == p) return true;
            if(board[0][i] == p && board[1][i] == p && board[2][i] == p) return true;
        }
        if(board[0][0] == p && board[1][1] == p && board[2][2] == p) return true;
        if(board[0][2] == p && board[1][1] == p && board[2][0] == p) return true;

        return false;
    }

    bool validTicTacToe(vector<string>& board) 
    {
        int cnto = 0, cntx = 0;

        for(int i = 0; i<3; i++)
            for(int j = 0; j<3; j++)
            {
                if(board[i][j] == 'X')  cntx++;
                if(board[i][j] == 'O')  cnto++;
            }
        cout<< cnto<< " " << cntx;

        if (cnto > cntx || cnto < cntx-1)  return false;

        if (winner(board, 'X') && winner(board, 'O')) return false;

        if (winner(board, 'X') && cntx != cnto+1 ) return false;

        if (winner(board, 'O') && cntx != cnto) return false;

        return true;         
    }
};