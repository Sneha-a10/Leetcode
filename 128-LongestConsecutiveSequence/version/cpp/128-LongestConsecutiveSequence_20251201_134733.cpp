// Last updated: 12/1/2025, 1:47:33 PM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) 
4    {
5        if (nums.size() == 0) return 0;
6        int cnt = 1;
7        int m = 0;
8        sort(nums.begin(),nums.end());
9        for(int i = 0; i<nums.size()-1; i++)
10        {
11            if(nums[i] == nums[i+1]) continue;
12            if(nums[i]+1 == nums[i+1]) cnt++;
13            else 
14            {
15                m = max(m,cnt);
16                cnt = 1;
17            }
18        }
19        return max(m, cnt);
20
21    }
22};