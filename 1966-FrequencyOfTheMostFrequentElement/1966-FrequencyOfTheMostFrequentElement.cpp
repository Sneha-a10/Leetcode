// Last updated: 2/13/2026, 12:56:15 PM
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        long cnt = 0;
        long r = 0, l = 0, t = 0; 
        while (r<nums.size())
        {
            t += nums[r];

            while (nums[r] * (r-l+1)> t+k)
            {
                t -=nums[l];
                l ++;
            }

            cnt = max(cnt, r-l+1);
            r ++;
        }
        return cnt;
    }
};