// Last updated: 1/15/2026, 11:52:13 PM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) 
4    {
5        int m = INT_MIN, s = 0;
6
7        for(int i: nums)
8        {
9            s += i;
10            m = max(s,m);
11
12            if(s<0) s = 0;
13        }
14
15        return m;
16    }
17};