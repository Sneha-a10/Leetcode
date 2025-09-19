// Last updated: 9/19/2025, 11:00:12 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int j = 1;
        int i = 0;
        int k = 0;
        vector<int> ans(nums.size());
        while(k<nums.size())
        {
            if(nums[k]>0)
            {
                ans[i] = nums[k];
                i+=2;
            }
            if(nums[k]<0)
            {    ans[j] = nums[k];
                j+=2;
            }
            k ++;
        }
        return ans;
    }
};