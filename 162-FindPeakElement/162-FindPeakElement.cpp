// Last updated: 2/13/2026, 12:57:46 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        if(nums.size() == 1 || nums[0] > nums[1] )  return 0;
        if(nums.back()> nums[nums.size()-2]) return nums.size()-1;
        int l = 1, h = nums.size()-2;

        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(nums[m] > nums[m-1] && nums[m]> nums[m+1]) return m;
            else if (nums[m]> nums[m-1]) l = m+1;
            else h = m-1;
        }
        return h;
    }
};