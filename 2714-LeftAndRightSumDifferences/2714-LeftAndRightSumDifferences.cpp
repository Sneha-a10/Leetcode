// Last updated: 2/13/2026, 12:55:45 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        int l = 0;
        int r = accumulate(nums.begin(),nums.end(),0);
        vector<int> res;
        for(int i : nums)
        {
            r -= i;
            res.push_back(abs(r-l));
            l +=i;
        }
        return res;
    }
};