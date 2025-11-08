// Last updated: 11/8/2025, 6:35:51 PM
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size();
        if (r == 0) return grid; 
        int c = grid[0].size();
        if (c == 0) return grid;

        long long p = (long long)r * c;  
        k = k % p;
        if (k == 0) return grid;

        vector<vector<int>> res(r, vector<int>(c));
        long long q = p - k;

        for (long long i = 0; i < p; i++) {
            long long f = (q + i) % p;
            int fr = f / c;
            int fc = f % c;
            int tr = i / c;
            int tc = i % c;

            res[tr][tc] = grid[fr][fc];
        }

        return res;
    }
};