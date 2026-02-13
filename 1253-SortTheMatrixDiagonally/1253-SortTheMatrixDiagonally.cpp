// Last updated: 2/13/2026, 12:56:39 PM
class Solution {
public:
    void sortdia(vector<vector<int>>& mat, int row, int col)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        int r = row, c = col;

        while(r<mat.size() && c< mat[0].size())
            pq.push(mat[r++][c++]);
            
        r = row;
        c = col;

        while(r<mat.size() && c< mat[0].size())
        {
            mat[r++][c++] = pq.top();
            pq.pop();
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat)
    {
        for(int j = 0; j<mat[0].size(); j++)
            sortdia(mat, 0, j);

        for(int i = 1; i< mat.size();i++)
            sortdia(mat, i, 0);
        return mat;
    }
};