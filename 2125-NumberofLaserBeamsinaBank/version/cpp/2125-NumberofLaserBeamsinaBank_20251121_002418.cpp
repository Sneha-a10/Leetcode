// Last updated: 11/21/2025, 12:24:18 AM
class Solution {
public:
    int numberOfBeams(vector<string>& bank) 
    {
        int cnt = 0, k = 0;
        for(auto& r : bank)
        {
            int d = count(r.begin(), r.end(), '1');
            if( d > 0)
            {
                cnt += d* k;
                k = d;
            }
        }
        return cnt;
    }
};