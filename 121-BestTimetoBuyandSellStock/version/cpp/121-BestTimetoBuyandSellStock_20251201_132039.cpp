// Last updated: 12/1/2025, 1:20:39 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) 
4    {
5        int p = 0, m = prices[0];
6        for(int v :prices)
7        {
8            p = max(p, v-m);
9            m = min(v, m);
10        }
11        cout << INT_MAX <<" "<< INT_MIN;
12        return p;
13    }
14};