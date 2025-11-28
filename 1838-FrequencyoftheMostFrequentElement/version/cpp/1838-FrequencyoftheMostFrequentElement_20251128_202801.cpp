// Last updated: 11/28/2025, 8:28:01 PM
1class Solution {
2public:
3    int maxFrequency(vector<int>& nums, int k) 
4    {
5        sort(nums.begin(),nums.end());
6        long cnt = 0;
7        long r = 0, l = 0, t = 0; 
8        while (r<nums.size())
9        {
10            t += nums[r];
11
12            while (nums[r] * (r-l+1)> t+k)
13            {
14                t -=nums[l];
15                l ++;
16            }
17
18            cnt = max(cnt, r-l+1);
19            r ++;
20        }
21        return cnt;
22    }
23};