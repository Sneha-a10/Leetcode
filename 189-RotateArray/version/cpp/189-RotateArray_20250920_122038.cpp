// Last updated: 9/20/2025, 12:20:38 PM
#include <iostream>

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int l = nums.size();
        vector<int> ans(l);
        for(int i =0; i<l; i++)
            ans[(i+k)%l] = nums[i];
            
        for(int i=0; i<l; i++)
            nums[i] = ans[i];
    }
};