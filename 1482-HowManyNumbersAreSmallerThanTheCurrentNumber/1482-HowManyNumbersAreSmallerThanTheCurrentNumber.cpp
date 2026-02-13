// Last updated: 2/13/2026, 12:56:32 PM
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