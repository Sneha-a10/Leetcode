// Last updated: 2/13/2026, 12:56:35 PM
class Solution {
public:
    bool sum(vector<int>& nums, int t, int threshold)
    {
        int res = 0;
        for(int i: nums)
            res += (i+t-1)/t;
        return (res <= threshold);
    }
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int l = 1;
        int h = *max_element(nums.begin(), nums.end());
        int res = 0;
        while(l<=h)
        {
            int m = l + (h-l)/2;
            if(sum(nums,m,threshold))
            {
                res = m;
                h = m-1;
            }    
            else l = m+1;
        }
        return res;
    }
};