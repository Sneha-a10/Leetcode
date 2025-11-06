// Last updated: 11/6/2025, 10:51:15 PM
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix)
    {
        for(int j = 0; j<matrix[0].size(); j++)
        {
            int m = 0;
            vector<int> o;
            for(int i = 0; i<matrix.size();i++)
            {
                if(m<matrix[i][j]) m = matrix[i][j];
                if(matrix[i][j] == -1) o.push_back(i);
            }
            for(int i: o)
                matrix[i][j] = m;
        }
        return matrix;
    }
};