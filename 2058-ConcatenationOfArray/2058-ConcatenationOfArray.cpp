// Last updated: 2/13/2026, 12:56:11 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector<int> res;
        for(int i = 0; i<nums.size()*2; i++)
            res.push_back(nums[i%nums.size()]);
        return res;
    }
};