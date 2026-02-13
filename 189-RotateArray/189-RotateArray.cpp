// Last updated: 2/13/2026, 12:57:41 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        if (k == 0 || nums.size() == 1) return;
        k = k% nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        return;
    }
};