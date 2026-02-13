// Last updated: 2/13/2026, 12:57:27 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        if(nums.size()==1) return;
        int i = 0;
        
        for(int j = 0; j<nums.size(); j++)
            if(nums[j] != 0)
                swap(nums[i++], nums[j]);
        
        return;
    }
};