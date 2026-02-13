// Last updated: 2/13/2026, 12:57:04 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        if(nums.size() == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums.back() != nums[nums.size()-2]) return nums.back();

        int l = 1, h = nums.size()-2, m;

        while(l<h)
        {
            m = l + (h-l)/2;
            if(nums[m] != nums[m+1] && nums[m] != nums[m-1]) return nums[m];
            else if (m%2 == 0 && nums[m] == nums[m-1] || m%2 == 1 && nums[m] == nums[m+1]) h = m-1;
            else l  = m+1;
        }
        return nums[h];
    }
};