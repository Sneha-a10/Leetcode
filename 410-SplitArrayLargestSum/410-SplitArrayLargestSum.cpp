// Last updated: 2/13/2026, 12:57:10 PM
class Solution {
public:
    int split(vector<int>& nums, int k)
    {
        int c = 1, s = 0;
        for(int i: nums)
            if(s+i <=k) s+=i;
            else
            {
                s = i;
                c++;
            }
        return c;
    }
    int splitArray(vector<int>& nums, int k)
    {
        int l = *max_element(nums.begin(), nums.end());
        int h = accumulate(nums.begin(), nums.end(),0);
        int res = 0;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(split(nums,m)<=k)
            {
                res = m;
                h = m-1;
            }
            else l = m+1;
        }

        return res;
    }
};