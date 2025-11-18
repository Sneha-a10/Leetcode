// Last updated: 11/19/2025, 12:43:38 AM
class Solution {
public:
    int pivotInteger(int n) 
    {
        int s = n*(n+1)/2;
        int x = sqrt(s);
        return x*x == s ? x: -1;
    }
};