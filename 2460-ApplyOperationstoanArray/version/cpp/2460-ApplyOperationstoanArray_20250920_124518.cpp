// Last updated: 9/20/2025, 12:45:18 PM
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