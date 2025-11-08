// Last updated: 11/8/2025, 12:48:58 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        unordered_set<int> r, c;
        for(int i = 0;i<matrix.size();i++)
            for(int j=0 ;j<matrix[0].size();j++)
                if(matrix[i][j]==0)
                {
                    r.insert(i);
                    c.insert(j);
                }

        for(int i=0; i<matrix.size();i++)
            for(int j=0; j<matrix[0].size();j++)
                if(r.count(i) || c.count(j))
                    matrix[i][j] = 0;

    }
};