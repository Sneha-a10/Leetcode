// Last updated: 2/13/2026, 12:58:15 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int m = INT_MIN, s = 0;

        for(int i: nums)
        {
            s += i;
            m = max(s,m);

            if(s<0) s = 0;
        }

        return m;
    }
};