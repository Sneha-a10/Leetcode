// Last updated: 10/16/2025, 7:16:38 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int p = 0, m = prices[0];
        for(int v :prices)
        {
            p = max(p, v-m);
            m = min(v, m);
        }
        return p;
    }
};