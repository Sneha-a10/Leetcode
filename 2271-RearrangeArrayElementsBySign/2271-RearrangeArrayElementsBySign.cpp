// Last updated: 2/13/2026, 12:55:57 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums)
    {
        vector<int> res(nums.size());
        int p = 0, n = 1, i = 0;
        while(i<nums.size())
        {
            if(nums[i] > 0)
            {
                res[p] = nums[i];
                p +=2;
            }
            else
            {
                res[n] = nums[i];
                n +=2;
            }
            i++;
        }
        return res;
    }
};