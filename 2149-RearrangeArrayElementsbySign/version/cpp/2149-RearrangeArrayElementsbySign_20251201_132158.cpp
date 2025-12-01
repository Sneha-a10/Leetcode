// Last updated: 12/1/2025, 1:21:58 PM
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) 
4    {
5        int j = 1;
6        int i = 0;
7        int k = 0;
8        vector<int> ans(nums.size());
9        while(k<nums.size())
10        {
11            if(nums[k]>0)
12            {
13                ans[i] = nums[k];
14                i+=2;
15            }
16            if(nums[k]<0)
17            {    ans[j] = nums[k];
18                j+=2;
19            }
20            k ++;
21        }
22        return ans;
23    }
24};