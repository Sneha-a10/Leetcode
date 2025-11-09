// Last updated: 11/9/2025, 12:41:25 PM
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) 
    {
        k %= mat[0].size();

        vector<vector<int>> ans(mat.size(), vector<int> (mat[0].size()));

        for(int i = 0; i<mat.size(); i++)
            if(i%2 == 0)
                for(int j = 0; j<mat[i].size(); j++)
                    ans[i][j] = mat[i][(j+k)% mat[0].size()];
            else
                 for(int j = 0; j<mat[i].size(); j++)
                    ans[i][j] = mat[i][(j-k +mat[0].size() )% mat[0].size()];

        return ans == mat;
    }
};