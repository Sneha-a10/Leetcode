// Last updated: 2/13/2026, 12:58:20 PM
class Solution {
public:
    void getperms( vector<vector<int>>& ans, int idx, vector<int>& nums)
    {
        if(idx == nums.size())
        {
            ans.push_back({nums});
            return;
        }

        for(int i = idx; i<nums.size(); i++)
        {
            swap(nums[idx], nums[i]);
            getperms(ans, idx+1, nums);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        int idx = 0;

        getperms(ans, idx, nums);

        return ans;
    }
};