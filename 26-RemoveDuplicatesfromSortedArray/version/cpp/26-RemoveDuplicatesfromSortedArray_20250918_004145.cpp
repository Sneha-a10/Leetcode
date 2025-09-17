// Last updated: 9/18/2025, 12:41:45 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)
        return 1;
        int i = 0;
        int j = 1;
        while(j<nums.size())
        {
            if (nums[i] == nums[j])
            j++;
            else
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};