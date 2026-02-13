// Last updated: 2/13/2026, 12:56:48 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = nums.size()-1;
        int j = 0;
        while(i>=j)
        {
            if(nums[i] %2 == 0)
            {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
                j++;
            }
            else
            {
                i--;
            }
        }
        return nums;
    }
};