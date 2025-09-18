// Last updated: 9/18/2025, 12:31:48 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> pos;
        vector<int> neg;

        for(int i = 0; i<nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                pos.push_back(nums[i]);
            }
            else
            neg.push_back(nums[i]);
        }
    int i = 0;
    int j = 0;
    while(i<nums.size())
    {
        nums[i] = pos[j];
        i++;
        nums[i] = neg[j];
        i++; j++;
    }
    return nums;
    }
};