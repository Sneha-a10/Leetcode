// Last updated: 7/21/2026, 5:05:38 PM
1class Solution {
2public:
3    int networkDelayTime(vector<vector<int>>& times, int n, int k) 
4    {
5        vector<int> dist(n+1, INT_MAX);
6        dist[k] = 0;
7
8        vector<pair<int,int>> adj[n+1];
9
10        for(auto j : times)
11            adj[j[0]].push_back({j[1],j[2]});
12
13        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
14        pq.push({0,k});
15
16        while(!pq.empty())
17        {
18            auto [di,t] = pq.top();
19            pq.pop();
20
21            for(auto j: adj[t])
22                if(dist[j.first] > di+j.second)
23                {
24                    dist[j.first] = di+j.second;
25                    pq.push({dist[j.first] , j.first});
26                }
27        }
28        int ans = *max_element(dist.begin()+1,dist.end());
29        return (ans == INT_MAX) ? -1: ans;
30    }
31};