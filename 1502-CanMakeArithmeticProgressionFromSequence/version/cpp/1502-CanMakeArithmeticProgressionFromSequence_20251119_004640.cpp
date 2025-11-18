// Last updated: 11/19/2025, 12:46:40 AM
class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0) return false;
        int n = x;
        long long rev = 0;
        while(n!=0)
        {
            int d = n%10;
            rev = rev*10 +d;
            n = n/10;
        }

        return rev == x;
    }
};