// Last updated: 11/27/2025, 4:35:50 PM
1class Solution {
2public:
3    vector<int> findBall(vector<vector<int>>& grid) 
4    {
5        int n = grid.size();
6        int m = grid[0].size();
7        vector<int> res (m,1);
8        for(int j = 0; j<m; j++)
9        {
10            int i = 0, k = j;
11            while(i<n && k>=0 && k < m)
12            {
13                if(grid[i][k] == 1) 
14                {
15                    if (k < m-1 && grid[i][k+1] == 1)
16                        k++;
17                    else
18                    {
19                       res[j] = -1;
20                       break;
21                    }
22                }
23                else
24                {
25                    if (k >0 && grid[i][k-1] == -1)
26                        k--;
27                    else
28                    {
29                        res[j] = -1;
30                        break;
31                    }
32                }  
33                i++;
34            }
35            if(res[j] == 1) res[j] = k;
36        }
37        return res;
38    }
39};