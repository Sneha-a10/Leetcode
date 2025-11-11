// Last updated: 11/11/2025, 3:02:28 PM
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        vector<vector<int>> mat (matrix[0].size(), vector<int> (matrix.size()));
        
        for(int i = 0; i<matrix.size(); i++)
            for(int j = 0; j<matrix[0].size();j++)
                mat[j][i] = matrix[i][j];
        return mat;
    }
};