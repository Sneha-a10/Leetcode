// Last updated: 1/1/2026, 1:56:18 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) 
4    {
5        if(nums.size() == 1) return 1;
6        int i = 0, j = 1;
7
8        while(j < nums.size())
9        {
10            if(nums[i] == nums[j]) j++;
11            else
12            {
13                i++;
14                nums[i] = nums[j];
15            }
16        }
17        return ++i;
18    }
19};