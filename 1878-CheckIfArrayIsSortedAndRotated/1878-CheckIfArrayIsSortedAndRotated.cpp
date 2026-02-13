// Last updated: 2/13/2026, 12:56:20 PM
class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int c = 0, i = 1;
        while(i<nums.size())
        {
            if(nums[i-1]> nums[i]) c++;
            i++;
        }
        
        if(nums.back() > nums[0]) c++;

        return c <=1 ;
    }
};