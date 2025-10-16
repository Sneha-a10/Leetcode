// Last updated: 10/16/2025, 11:04:57 PM
class Solution {
public:
    int trailingZeroes(int n) 
    {
        return n == 0 ? 0 : n/5 +trailingZeroes(n/5);
    }
};