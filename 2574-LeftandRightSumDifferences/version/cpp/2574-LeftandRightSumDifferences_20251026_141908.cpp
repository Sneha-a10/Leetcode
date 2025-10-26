// Last updated: 10/26/2025, 2:19:08 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        vector <int> left(nums.size(),0);
        vector <int> right(nums.size(),0);

        for(int i =0, j=nums.size()-1;i<nums.size()-1;i++,j--)
        {
            left[i+1] = left[i] +nums[i];
            right[j-1] = right[j] + nums[j];
        }

        for(int i =0 ;i<nums.size(); i++)
            nums[i] = abs(left[i] - right[i]);
        
        return nums;
    }
};