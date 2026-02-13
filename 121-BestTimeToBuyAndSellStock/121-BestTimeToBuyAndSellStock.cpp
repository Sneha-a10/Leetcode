// Last updated: 2/13/2026, 12:57:59 PM
class Solution {
public:
    int maxProfit(vector<int>& nums) 
    {
        int m = nums[0], p = 0;
        for(int i: nums)
        {
            p = max(p, i-m);
            m = min(i,m);
        }
        return p;
    }
};