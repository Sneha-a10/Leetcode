// Last updated: 12/1/2025, 12:04:55 AM
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        int len = nums.size();
5        sort(nums.begin(), nums.end());
6
7        set<vector<int>> ans;
8
9        for(int i = 0; i<len-3; i++)
10        {
11            while( i> 0 && nums[i-1]== nums[i]) i++;
12            for( int j = i+1; j<len-2; j++)
13            {
14                // while( nums[j-1]== nums[j]) j++;
15                int l = j+1, h = len-1;
16
17                while(l<h)
18                {
19                    long long s = (long long) nums[i]+nums[j]+ nums[l]+ nums[h];
20                    if(s == target)
21                    {
22                       ans.insert({nums[i], nums[j], nums[l], nums[h]});
23                       l ++; h--;
24                    }
25                    else if (s > target)
26                    h--;
27                    else
28                    l++;
29                }
30            }
31        }
32        return vector<vector<int>>(ans.begin(), ans.end());
33    }
34};