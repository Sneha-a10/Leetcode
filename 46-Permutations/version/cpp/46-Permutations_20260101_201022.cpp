// Last updated: 1/1/2026, 8:10:22 PM
1class Solution {
2public:
3    void getperms( vector<vector<int>>& ans, int idx, vector<int>& nums)
4    {
5        if(idx == nums.size())
6        {
7            ans.push_back({nums});
8            return;
9        }
10
11        for(int i = idx; i<nums.size(); i++)
12        {
13            swap(nums[idx], nums[i]);
14            getperms(ans, idx+1, nums);
15            swap(nums[idx], nums[i]);
16        }
17    }
18    vector<vector<int>> permute(vector<int>& nums) 
19    {
20        vector<vector<int>> ans;
21        int idx = 0;
22
23        getperms(ans, idx, nums);
24
25        return ans;
26    }
27};