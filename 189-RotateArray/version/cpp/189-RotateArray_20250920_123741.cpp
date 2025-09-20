// Last updated: 9/20/2025, 12:37:41 PM
#include <iostream>

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int l = nums.size();
        if(l<2|| k==0)
        return;
        k = k % l;
        reverse(nums.begin(), nums.end());

        reverse(nums.begin(),nums.begin()+k);

        reverse(nums.begin()+k,nums.end());
    }
};