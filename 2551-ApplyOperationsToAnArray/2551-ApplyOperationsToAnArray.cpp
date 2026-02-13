// Last updated: 2/13/2026, 12:55:51 PM
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()-1)
        {
            if(nums[i] ==  nums[i+1])
            {
                nums[i] *=2;
                nums[i+1] = 0;
            }
            i++;
        }
        vector <int> ans (nums.size(),0);
        int j = 0;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i] > 0)
            {
                ans[j] = nums[i];
                j++;
            }
        }
        return ans;
    }
};