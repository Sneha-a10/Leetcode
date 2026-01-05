// Last updated: 1/5/2026, 11:55:56 PM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) 
4    {
5        unordered_map<int, int> m;
6        m[0] = 1;
7        int ans = 0, s = 0;
8        for(int x : nums)
9        {
10            s +=x;
11            if(m.count(s-k))
12                ans+= m[s-k];
13            
14            m[s] +=1;            
15        }
16        return ans;
17    }
18};