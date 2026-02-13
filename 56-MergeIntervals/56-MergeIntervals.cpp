// Last updated: 2/13/2026, 12:58:13 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;

        int j = 0;
        ans.push_back({intervals[0][0], intervals[0][1]});

        for(auto& i: intervals)
        {
            if(i[0] <= ans[j][1]) 
            {
                if(i[1] >= ans[j][1])
                    ans[j][1] = i[1];
            }
            else
            {
                j++;
                ans.push_back({i[0], i[1]});
            }
        }
        return ans;
    }
};