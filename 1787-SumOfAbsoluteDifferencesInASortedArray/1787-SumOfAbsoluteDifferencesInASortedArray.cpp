// Last updated: 2/13/2026, 12:56:23 PM
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
    {
        vector<int> ans;

        int s = accumulate(nums.begin(), nums.end(), 0);
        
        int t = 0;

        for(int i =0; i<nums.size();i++)
        {
            int n = (nums[i] * i - t) + (s - t - nums[i] * (nums.size()- i));
            ans.push_back(n);
            t += nums[i];
        }
          
        return ans;
    }
};