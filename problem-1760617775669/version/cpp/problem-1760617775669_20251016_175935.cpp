// Last updated: 10/16/2025, 5:59:35 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> m;
        
        for(int i = 0; i<nums.size(); i++)
        {
            int c = target- nums[i];
            if(m.count(c))
                return {i, m[c]};
            else
                m[nums[i]] = i;
        }
        return {-1,-1};
    }      
};