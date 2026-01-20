// Last updated: 1/20/2026, 7:34:19 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int n = nums.size();
5        int pref = 1, suff = 1;
6        int ans = INT_MIN;
7
8        for (int i = 0; i < n; i++) {
9            pref = (pref == 0 ? 1 : pref) * nums[i];
10            suff = (suff == 0 ? 1 : suff) * nums[n - 1 - i];
11            ans = max(ans, max(pref, suff));
12        }
13
14        return ans;
15    }
16};
17