// Last updated: 2/13/2026, 12:56:43 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        for(int &n : nums) n *= n;
        sort(nums.begin(),nums.end());
        return nums;
    }
};