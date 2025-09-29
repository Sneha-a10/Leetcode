// Last updated: 9/29/2025, 3:35:18 PM
class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int r = count(nums.begin(), nums.end(),0);
        int w = count(nums.begin(), nums.end(),1);
        int b = count(nums.begin(), nums.end(),2);
        for(int i=0; i<r; i++)
        nums[i] = 0;
        for(int i= 0; i<w; i++)
        nums[i+r] = 1;
        for(int i=0; i<b; i++)
        nums[i+r+w] = 2;
    }
};