// Last updated: 9/28/2025, 4:32:08 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;

        for(int i =0; i< nums.size(); i++)
        {
            unordered_set <int>  check;
            if( i > 0  && nums[i]==nums[i-1])
            continue;
            for(int j = i+1; j <nums.size(); j++)
            {
                int c = -nums[i]-nums[j];
                if(check.count(c))
                    ans.insert({nums[i], nums[j], c});
                else
                    check.insert(nums[j]);
            }
        }
        return vector< vector<int>> (ans.begin(), ans.end());
    }
};