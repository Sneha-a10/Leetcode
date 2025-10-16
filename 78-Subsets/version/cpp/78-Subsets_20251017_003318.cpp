// Last updated: 10/17/2025, 12:33:18 AM
class Solution {
public:
    void getperms(vector<int>& nums, int id, vector<vector<int>>& ans)
    {
        if(id == nums.size())
        {
            ans.push_back({nums});
            return;
        }
        for(int i = id; i<nums.size(); i++)
        {
            swap(nums[id],nums[i]);
            getperms(nums, id+1, ans);
            swap(nums[id],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        getperms(nums, 0, ans);
        return ans;
    }
};