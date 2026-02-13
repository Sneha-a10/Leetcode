// Last updated: 2/13/2026, 12:55:42 PM
#include <algorithm>

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) 
    {
        int mr = -1, r = 0;
        for(int i = mat.size()-1; i >=0; i--)
        {
            int cr = count(mat[i].begin(), mat[i].end(),1);
            if(cr >= mr ) 
            {
                mr = cr;
                r = i;
            }
        }
        return {r,mr};
    }
};