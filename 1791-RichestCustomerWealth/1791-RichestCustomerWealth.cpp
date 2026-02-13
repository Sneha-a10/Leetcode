// Last updated: 2/13/2026, 12:56:24 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int cnt = 0;

        for(int i = 0; i<accounts.size(); i++)
        {
            int c = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            cnt = max (c,cnt);
        }

        return cnt;
    }
};