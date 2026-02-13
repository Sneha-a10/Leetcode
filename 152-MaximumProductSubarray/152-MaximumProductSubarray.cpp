// Last updated: 2/13/2026, 12:57:50 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pref = 1, suff = 1;
        int ans = INT_MIN;

        for (int i = 0; i < n; i++) {
            pref = (pref == 0 ? 1 : pref) * nums[i];
            suff = (suff == 0 ? 1 : suff) * nums[n - 1 - i];
            ans = max(ans, max(pref, suff));
        }

        return ans;
    }
};
