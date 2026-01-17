// Last updated: 1/17/2026, 11:38:37 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) 
4    {
5        int l = 0, h = nums.size()-1;
6        int m;
7        if( target < nums[0] ) return 0;
8        if( target > nums.back()) return nums.size();
9        while(l<=h)
10        {
11            m = (l+h)/2;
12            if(nums[m] == target) return m;
13            else if (nums[m] < target) l = m+1;
14            else h = m-1;
15        }
16        return l;
17    }
18};