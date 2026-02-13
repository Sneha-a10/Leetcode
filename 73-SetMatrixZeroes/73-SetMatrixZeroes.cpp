// Last updated: 2/13/2026, 12:58:09 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        bool r = false, c = false;
        for(int i = 0; i< matrix.size(); i++)
            for (int j =0; j<matrix[0].size(); j++)
                {
                    if(matrix[i][j] == 0) 
                    {
                        if(i == 0)
                            r = true;
                        else if (j == 0)
                            c = true;
                        else
                        {   
                            matrix[0][j] = 0;
                            matrix[i][0] = 0;
                        }
                    }
                }

        for(int i =  matrix.size()-1; i>=0; i--)
            for (int j = matrix[0].size()-1; j>=0; j--)
            {
                if((i == 0 && r == true) || ( j == 0 && c == true))
                    matrix[i][j] = 0;
                if(matrix[i][0] == 0 || matrix[0][j] == 0) 
                    matrix[i][j] = 0;
            }
        return;
    }
};