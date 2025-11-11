// Last updated: 11/11/2025, 2:53:46 PM
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                int newInd;
                // if(i % 2 == 0) // even-indexed row → left shift
                    newInd = (j + k) % n;
                // else            // odd-indexed row → right shift
                //     newInd = (j - k + n) % n;
                
                if(mat[i][j] != mat[i][newInd])
                    return false;
            }
        }
        return true;
    }
};
