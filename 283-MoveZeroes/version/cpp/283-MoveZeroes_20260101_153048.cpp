// Last updated: 1/1/2026, 3:30:48 PM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) 
4    {
5        if(nums.size()==1) return;
6        int i = 0;
7        
8        for(int j = 0; j<nums.size(); j++)
9            if(nums[j] != 0)
10                swap(nums[i++], nums[j]);
11        
12        return;
13    }
14};