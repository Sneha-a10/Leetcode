// Last updated: 11/19/2025, 12:44:56 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector<int> res = nums;
        res.insert(res.end(), nums.begin(), nums.end());
        return res;
    }
};