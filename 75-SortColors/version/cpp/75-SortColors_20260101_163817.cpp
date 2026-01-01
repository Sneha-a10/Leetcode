// Last updated: 1/1/2026, 4:38:17 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) 
4    {
5        int f = 0, e = nums.size()-1, i = 0;
6        while(i <= e)
7        {
8            if(nums[i] == 0)
9            swap(nums[i++], nums[f++]);
10
11            else if (nums[i] == 2)
12            swap(nums[i], nums[e--]);
13
14            else i++;
15        }
16        return;
17    }
18};