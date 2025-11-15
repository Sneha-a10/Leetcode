// Last updated: 11/15/2025, 11:21:43 PM
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int rows = boxGrid.size();
        int cols = boxGrid[0].size();

        for(int i=0;i<rows;i++) {
            int k = cols-1;
            for(int j=cols-1;j>=0;j--) {
                if(boxGrid[i][j] == '#') {
                    boxGrid[i][k] = '#';
                    if(j!=k)
                        boxGrid[i][j] = '.';
                    k--; 
                } else if (boxGrid[i][j] == '*') {
                    k = j - 1;
                }
            }
        }

        vector<vector<char>> ans(cols, vector<char>(rows, '.'));


        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++) {
                ans[j][rows - 1 - i] = boxGrid[i][j];
            }
        }

        return ans;
    }
};