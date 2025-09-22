// Last updated: 9/22/2025, 11:51:15 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        for(int i = 0; i<nums.size();i++)
        {
            int c = target-nums[i];
            if(map.count(c))
                return {i, map[c]};
            map[nums[i]] = i;
        }
        return {-1,-1};
    }      
};