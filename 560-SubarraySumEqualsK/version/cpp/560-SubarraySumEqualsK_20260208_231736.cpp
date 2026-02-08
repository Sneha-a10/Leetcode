// Last updated: 2/8/2026, 11:17:36 PM
1class Solution {
2public:
3    bool poss(vector<int>& weights, int days, int cap)
4    {
5        int c = 1;
6        int s = 0;
7        for(int i: weights)
8        {
9            if(s+i <= cap)
10                s+=i;
11            else
12            {
13                c++;
14                s = i;
15            }
16        }
17        return (c <= days);
18    }
19    int shipWithinDays(vector<int>& weights, int days) 
20    {
21        int l = *max_element(weights.begin(), weights.end());
22        int h = accumulate(weights.begin(), weights.end(), 0);
23        int res = 0;
24        while(l<=h)
25        {
26            int m = l+(h-l)/2;
27            if(poss(weights,days,m))
28            {
29                res = m;
30                h = m-1;
31            }
32            else
33            l = m+1;
34        }
35        return res;
36    }
37};