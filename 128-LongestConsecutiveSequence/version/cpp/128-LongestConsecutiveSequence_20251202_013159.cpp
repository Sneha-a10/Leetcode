// Last updated: 12/2/2025, 1:31:59 AM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) 
4    {
5        if (nums.size() == 0) return 0;
6        unordered_set <int> s (nums.begin(), nums.end());
7
8        int cnt = 0;
9        
10        for(int n: s)
11        {
12            if(s.find(n-1) == s.end())
13            {
14                int l = 1;
15                while(s.find(n+l) != s.end()) l++;
16                cnt = max(l,cnt);
17            }
18        }
19        return cnt;
20
21    }
22};