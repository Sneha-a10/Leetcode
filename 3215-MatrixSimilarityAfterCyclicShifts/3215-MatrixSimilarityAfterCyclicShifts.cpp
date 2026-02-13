// Last updated: 2/13/2026, 12:55:37 PM
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) 
    {
        int m = mat[0].size();
        k %= mat[0].size();
        for(int i = 0; i<mat.size();i++)
            if(i%2 == 0 )
            for(int j =0; j <m;j++)
            {
                int idx = (j + k) % m;
                if (mat[i][j] != mat[i][idx]) return false;
            }
            else
            for(int j =0; j <m;j++)
            {
                int idx = (j - k + m) % m;
                if (mat[i][j] != mat[i][idx]) return false;
            }
        return true;
    }
};