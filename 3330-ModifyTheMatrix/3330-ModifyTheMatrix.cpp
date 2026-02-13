// Last updated: 2/13/2026, 12:55:35 PM
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix)
    {
        vector<int> m;
        for(int j = 0; j<matrix[0].size(); j++)
        {
            int ma = 0;
            for(int i = 0; i<matrix.size();i++)
                if(ma<matrix[i][j]) ma = matrix[i][j];
            m.push_back(ma);
        }
        for(int j=0; j<matrix[0].size();j++)
            for(int i=0; i< matrix.size();i++)
                if(matrix[i][j]==-1) matrix[i][j] = m[j];
        return matrix;
    }
};