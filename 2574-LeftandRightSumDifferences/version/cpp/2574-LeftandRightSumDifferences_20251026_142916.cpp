// Last updated: 10/26/2025, 2:29:16 PM
class Solution {
public:
    vector<int>leftsum(vector<int>nums)
    { int n=nums.size();
       vector<int>arr_left(n);
       arr_left[0]=0;
       for(int i=1;i<n;i++)
       {
        arr_left[i]=arr_left[i-1]+nums[i-1];
       }
       return arr_left;
    }
    vector<int>rightsum(vector<int>nums)
    {
        reverse(nums.begin(),nums.end());
        vector<int>arr_right=leftsum(nums);
        reverse(arr_right.begin(),arr_right.end());
        return arr_right;
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>arr_right=rightsum(nums);
       vector<int>arr_left=leftsum(nums);
       int n =nums.size();
       vector<int>ans(n);
       for(int i=0;i<n;i++)
       {
        ans[i]=abs(arr_left[i]-arr_right[i]);
       }
       return ans;

    }
};