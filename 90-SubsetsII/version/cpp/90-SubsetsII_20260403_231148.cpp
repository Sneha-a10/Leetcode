// Last updated: 4/3/2026, 11:11:48 PM
1class Solution {
2public:
3    vector<vector<int>> ans;
4    void recur(vector<int>& nums, int i, vector<int>& a)
5    {
6        ans.push_back(a);        
7        for(int j = i; j<nums.size(); j++)
8        {
9            if(j>i && nums[j] == nums[j-1]) continue;
10            a.push_back(nums[j]);
11            recur(nums, j+1, a);
12            a.pop_back();
13        }
14    }
15    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
16    {
17        vector<int> a;
18        sort(nums.begin(), nums.end());
19        recur(nums, 0, a);
20        return ans;
21    }
22};