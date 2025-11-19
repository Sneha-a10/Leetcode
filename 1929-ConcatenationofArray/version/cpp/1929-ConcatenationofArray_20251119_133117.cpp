// Last updated: 11/19/2025, 1:31:17 PM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int d;
        for(int isr =1; isr<nums.size(); isr++)
            if(nums[isr-1] == nums[isr]) 
            {
                d = nums[isr];
                break;
            }

        int j = 1;

        for( int x: nums)
            if( x==j) j++;
        
        return {d,j};        
    }
};