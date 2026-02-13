// Last updated: 2/13/2026, 12:58:26 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int s = 0, e = -1;
        int l = 0, h = nums.size()-1;
        while(l<=h)
        {
            int m = l +(h-l)/2;
            if(nums[m]>= target)
            {
                s = m;
                h = m-1;
            }
            else l = m+1;
        }

        l = 0, h = nums.size()-1;

        while(l<=h)
        {
            int m = l +(h-l)/2;
            if(nums[m]<= target)
            {
                e = m;
                l = m+1;
            }
            else h = m-1;
        }

        if (e!=-1 && s<=e && nums[s] == target) return {s,e};
        else return {-1,-1};
    }
};