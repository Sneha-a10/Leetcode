// Last updated: 2/13/2026, 12:57:43 PM
class Solution {
public:
    int trailingZeroes(int n) 
    {
        return n == 0 ? 0 : n/5 +trailingZeroes(n/5);
    }
};