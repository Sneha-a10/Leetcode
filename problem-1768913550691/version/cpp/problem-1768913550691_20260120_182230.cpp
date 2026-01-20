// Last updated: 1/20/2026, 6:22:30 PM
1class Solution {
2public:
3    void merge( vector<int>& nums, int l, int m, int h)
4    {
5        vector<int> t;
6        int i = l, j = m+1;
7        while(i<=m && j<=h)
8        {
9            if(nums[i]>nums[j])
10            t.push_back(nums[j++]);
11            else
12            t.push_back(nums[i++]);
13        }
14
15        while(i<=m) t.push_back(nums[i++]);
16        while(j<=h) t.push_back(nums[j++]);
17
18        for(int k: t)
19        nums[l++] = k;
20    }
21
22    int count( vector<int>& nums, int l, int m, int h)
23    {
24        int i = l, j = m+1;
25        int c = 0;
26        while(i<=m && j<=h)
27        {
28            if(nums[i]> 2LL*nums[j])
29            {
30                c+= (m-i+1);
31                j++;
32            }
33            else
34            i++;
35        }
36        return c;
37    }
38
39    int mergesort(vector<int>& nums, int l, int h)
40    {
41        int c = 0;
42        if(l>=h) return c;
43        int m = (l+h)/2;
44        c += mergesort(nums, l, m);
45        c += mergesort(nums, m+1, h);
46        c += count(nums, l, m ,h);
47        merge(nums, l, m ,h);
48        return c;
49    }
50    int reversePairs(vector<int>& nums) 
51    {
52        int l = 0, h = nums.size()-1;
53        return mergesort(nums,l,h);
54    }
55};