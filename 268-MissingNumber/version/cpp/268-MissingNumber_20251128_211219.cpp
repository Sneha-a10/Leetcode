// Last updated: 11/28/2025, 9:12:19 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) 
4    {
5        sort(nums.begin(), nums.end());
6        int j = 0;
7        for(int i: nums)
8        {
9            if(i!= j) return j;
10            j++;
11        }
12        return j;
13    }
14};