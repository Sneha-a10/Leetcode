// Last updated: 2/13/2026, 12:55:48 PM
class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) 
    {
        vector<vector<int>> ans (n,vector<int>(n, 0));

        for(auto& q : queries)
        {
            ans[q[0]][q[1]]++;

            if (q[3]+1 < n)
                ans[q[0]][q[3]+1]--;

            if (q[2]+1 < n)
                ans[q[2]+1][q[1]]--;

            if (q[2]+1 <n && q[3]+1 <n)
                ans[q[2]+1][q[3]+1]++;
        }

        for(int i = 0; i<n; i++)
            for (int j = 0; j<n ; j++)
            {
                if(i > 0)
                    ans[i][j] += ans[i-1][j];
                
                if(j > 0)
                    ans[i][j] += ans[i][j-1];
                
                if(i > 0 && j > 0)
                    ans[i][j] -= ans[i-1][j-1];
            }    
        return ans;
    }
};