// Last updated: 2/13/2026, 12:56:46 PM
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int o = 1; int e = 0;
        while(e<nums.size() && o<nums.size())
        {
            while(e<nums.size() && nums[e] %2 == 0 )
            e +=2;

            while(o<nums.size() && nums[o] %2 != 0)
            o +=2;

            if (e<nums.size() && o<nums.size())
            swap (nums[o], nums[e]);
        }
        return nums;
    }
};