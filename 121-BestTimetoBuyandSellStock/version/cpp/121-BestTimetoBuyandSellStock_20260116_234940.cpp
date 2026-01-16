// Last updated: 1/16/2026, 11:49:40 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& nums) 
4    {
5        int m = nums[0], p = 0;
6        for(int i: nums)
7        {
8            p = max(p, i-m);
9            m = min(i,m);
10        }
11        return p;
12    }
13};