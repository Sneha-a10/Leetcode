// Last updated: 10/16/2025, 9:23:07 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        if(nums.size()== 1 || !count(nums.begin(), nums.end(), 0))
        return;

        int i = 0;
        for(int j = 0; j<nums.size(); j++)
            if(nums[j] != 0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
    }
};