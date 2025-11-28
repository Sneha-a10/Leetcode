// Last updated: 11/28/2025, 8:29:28 PM
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0;

        int ans = 0;
        long long sum = 0;
        sort(nums.begin(),nums.end());

        while(r<n){
            sum+=nums[r];
            int len = r-l+1;

            if(l<=r && nums[r]*1LL*len > sum+k){
                sum -= nums[l];
                l++;
                len = r-l+1;
            }

            ans = max(ans,len);
            r++;
        }

        return ans;
    }
};