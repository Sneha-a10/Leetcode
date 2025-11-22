// Last updated: 11/22/2025, 11:35:17 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        vector<int> res;
        sort(nums.begin(), nums.end());
        int j = 1;

        for(int i = 0; i<nums.size(); i++)
        {
            while(i<nums.size()-1 && nums[i] == nums[i+1]) i++;
            while (nums[i] != j) res.push_back(j++);
            if(nums[i] == j) j++;
        }

        while(j <= nums.size()) res.push_back(j++);

        return res;
    }
};