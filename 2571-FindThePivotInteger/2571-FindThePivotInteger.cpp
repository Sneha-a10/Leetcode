// Last updated: 2/13/2026, 12:55:50 PM
class Solution {
public:
    int pivotInteger(int n) 
    {
        int s = n*(n+1)/2;
        int x = sqrt(s);
        return x*x == s ? x: -1;
    }
};