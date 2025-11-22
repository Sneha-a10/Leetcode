// Last updated: 11/22/2025, 11:22:39 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> ch = nums;
        sort(nums.begin(),nums.end());

        for(int i = 0; i<nums.size(); i++)
            ch[i] = lower_bound(nums.begin(),nums.end(), ch[i]) - nums.begin();  
        
        return ch;
    }
};