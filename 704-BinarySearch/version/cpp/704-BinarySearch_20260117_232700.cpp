// Last updated: 1/17/2026, 11:27:00 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) 
4    {
5        int l = 0, h = nums.size()-1;
6        while(l<=h)
7        {
8            int m = (l+h)/2;
9            if(nums[m] == target) return m;
10            else if (nums[m]> target) h = m-1;
11            else l = m +1;
12        }
13        return -1;
14    }
15};