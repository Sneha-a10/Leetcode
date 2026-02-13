// Last updated: 2/13/2026, 12:58:04 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int l = 0, h = nums.size()-1;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(nums[m] == target) return true;
            if(nums[m] == nums[h] && nums[m] == nums[l])
            {
                l++; h--;
                continue;
            }
            if(nums[m]<=nums[h])
            {
                if(nums[m]<target && target<=nums[h]) l = m+1;
                else h = m-1;
            }
            else
            {
                if(nums[m]>target && target>= nums[l]) h = m-1;
                else l = m+1;
            }
        }
        return false;
    }
};