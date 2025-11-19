// Last updated: 11/19/2025, 12:55:57 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int c = 0;
        int m = c;
        for(int i : nums)
        {
            if ( i == 1) c++;
            else 
            {   if( m < c) m = c;
                c = 0;
            }
        }
        return max(c,m);
    }
};