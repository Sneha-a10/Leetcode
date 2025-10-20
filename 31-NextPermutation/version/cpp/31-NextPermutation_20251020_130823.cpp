// Last updated: 10/20/2025, 1:08:23 PM
class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int l = nums.size()-2;
        while(l>=0 && nums[l]>= nums[l+1]) l--;
        
        if(l<0)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        int i = nums.size()-1;

        while( i > l && nums[i] <=nums[l]) i--;

        swap(nums[i],nums[l]);
        reverse(nums.begin()+l+1, nums.end());
        return;      
    }
};