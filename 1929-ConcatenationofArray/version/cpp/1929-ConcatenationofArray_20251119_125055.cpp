// Last updated: 11/19/2025, 12:50:55 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> res;
        int i = 0;
        while(n<nums.size())
        {
            res.push_back(nums[i++]);
            res.push_back(nums[n++]);
        }

        return res;
    }
};