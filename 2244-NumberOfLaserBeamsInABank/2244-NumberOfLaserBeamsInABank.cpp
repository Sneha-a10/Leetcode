// Last updated: 2/13/2026, 12:56:00 PM
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