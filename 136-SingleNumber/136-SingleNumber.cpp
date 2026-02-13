// Last updated: 2/13/2026, 12:57:55 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res = 0;
        for(int i : nums)
        res ^= i; 

        return res;
    }
};