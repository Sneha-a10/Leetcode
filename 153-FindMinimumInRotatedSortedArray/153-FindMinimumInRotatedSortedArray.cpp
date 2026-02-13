// Last updated: 2/13/2026, 12:57:49 PM
class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int l = 0, h = nums.size()-1;
        int mi = nums[0];
        while(l<=h)
        {
            int m = l+(h-l)/2;
            mi = min(mi,nums[m]);
            if(nums[m]>=nums[h])l= m+1;
            else h = m-1;
        }
        return mi;
    }
};