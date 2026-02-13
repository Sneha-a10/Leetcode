// Last updated: 2/13/2026, 12:58:25 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int l = 0, h = nums.size()-1;
        int a = nums.size();
        while(l<=h)
        {
            int m = (l+h)/2;
            if(nums[m] >= target) 
            {
                a = m;
                h = m-1;
            }
            else l = m+1;
        }
        return a;
    }
};