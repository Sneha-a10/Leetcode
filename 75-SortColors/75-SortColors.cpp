// Last updated: 2/13/2026, 12:58:07 PM
class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int f = 0, e = nums.size()-1, i = 0;
        while(i <= e)
        {
            if(nums[i] == 0)
            swap(nums[i++], nums[f++]);

            else if (nums[i] == 2)
            swap(nums[i], nums[e--]);

            else i++;
        }
        return;
    }
};