// Last updated: 1/1/2026, 2:58:31 PM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) 
4    {
5        if(nums.size()== 1 || !count(nums.begin(), nums.end(), 0))
6        return;
7
8        int i = 0;
9        for(int j = 0; j<nums.size(); j++)
10            if(nums[j] != 0)
11            {
12                swap(nums[i],nums[j]);
13                i++;
14            }
15    }
16};