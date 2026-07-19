// Last updated: 7/19/2026, 12:20:30 PM
1class Solution {
2public:
3    int count(vector<int>& nums, int i, vector<int>& dp)
4    {
5        if(i == nums.size()-1) return 0;
6
7        if(dp[i] != -1) return dp[i];
8
9        int ans = nums.size();
10
11        for(int j = 1; j<= nums[i]; j++)
12            if(i+j < nums.size())
13            ans = min(ans, 1 + count(nums, i+j, dp));
14
15        return dp[i] = ans;
16    }
17    int jump(vector<int>& nums) 
18    {
19        vector<int> dp (nums.size(), -1);
20        return count(nums, 0, dp);
21    }
22};