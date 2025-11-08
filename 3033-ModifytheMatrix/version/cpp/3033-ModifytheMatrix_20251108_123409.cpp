// Last updated: 11/8/2025, 12:34:09 PM
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int> maxcol;

        int m = matrix.size(), n= matrix[0].size(),mx;

        for(int i = 0;i<n;i++){
            mx = -1;
            for(int j = 0;j<m;j++){
                mx = max(mx,matrix[j][i]);
            }
            maxcol.push_back(mx);
        }

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(matrix[i][j]==-1){
                    matrix[i][j] = maxcol[j];
                }
            }
        }

        return matrix;
    }
};