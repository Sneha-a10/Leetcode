// Last updated: 7/11/2026, 9:08:53 PM
1class Solution {
2public:
3    vector<int> eventualSafeNodes(vector<vector<int>>& graph) 
4    {
5        int V = graph.size();
6        vector<int> a(V,0), ind(V, 0), ans;
7        queue<int> Q;
8
9        vector<vector<int>> rev(V);
10        for(int i = 0; i<V; i++)
11            for(auto j: graph[i])
12                rev [j].push_back(i);
13        
14        for(int i = 0; i<V; i++)
15            for(auto j: rev[i])
16                ind[j]++;
17        
18        for(int i = 0; i<V; i++)
19            if(!ind[i])
20                Q.push(i);
21        
22        while(!Q.empty())
23        {
24            int t = Q.front();
25            Q.pop();
26            a[t] = 1;
27
28            for(auto j: rev[t])
29                if(!(--ind[j]))
30                    Q.push(j);
31        }
32
33        for(int i = 0; i<V; i++)
34            if(a[i]) ans.push_back(i);
35        return ans;
36    }
37};