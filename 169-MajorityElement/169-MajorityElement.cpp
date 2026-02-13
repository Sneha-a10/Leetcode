// Last updated: 2/13/2026, 12:57:44 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int c = 0, el = nums[0];
        for(int i = 0; i<nums.size(); i++)
        {
            if( nums[i] == el) c++;
            else c--;

            if(c == 0) el = nums[i+1];
        }

        return el;
    }
};