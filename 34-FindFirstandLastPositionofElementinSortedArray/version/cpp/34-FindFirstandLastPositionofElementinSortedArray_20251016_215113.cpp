// Last updated: 10/16/2025, 9:51:13 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        // if(!nums.size())
        //     return {-1,-1};

        int l = 0, r = nums.size()-1;
        while(l<=r)
        {
            int m = (l+r)/2;
            if(nums[m] == target)
            {
                l = m; r = m;
                while(l>=0 && nums[l] == target) l--; l++;
                while(r<nums.size() && nums[r] == target) r++; r--;
                return {l,r};
            }
            if(nums[m]>target) r = m -1;
            else l = m +1;
        }
        return {-1,-1};
    }
};