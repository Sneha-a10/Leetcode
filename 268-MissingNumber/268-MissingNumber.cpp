// Last updated: 2/13/2026, 12:57:30 PM
class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int j = 0;
        for(int i: nums)
        {
            if(j!=i) return j;
            j++;
        }
        return j;
    }
};