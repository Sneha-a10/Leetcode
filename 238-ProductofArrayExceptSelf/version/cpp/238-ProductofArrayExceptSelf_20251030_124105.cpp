// Last updated: 10/30/2025, 12:41:05 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> left;
        vector<int> right;
        int p = 1;
        for(int i :nums)
        {
            left.push_back(p);
            p *=i;
        }
        p = 1;
        reverse(nums.begin(),nums.end());
        for(int i :nums)
        {
            right.push_back(p);
            p *=i;
        }
        reverse(right.begin(),right.end());
        for(int i=0; i<nums.size(); i++)
            nums[i] = left[i]*right[i];
        
        return nums;
    }
};