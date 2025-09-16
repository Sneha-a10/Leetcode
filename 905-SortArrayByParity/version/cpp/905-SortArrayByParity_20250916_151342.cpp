// Last updated: 9/16/2025, 3:13:42 PM
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