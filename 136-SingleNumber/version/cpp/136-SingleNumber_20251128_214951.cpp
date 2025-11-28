// Last updated: 11/28/2025, 9:49:51 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) 
4    {
5        int res = 0;
6        for(int i : nums)
7        res ^= i; 
8
9        return res;
10    }
11};