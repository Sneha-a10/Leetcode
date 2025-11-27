// Last updated: 11/27/2025, 11:58:08 PM
1class Solution {
2public:
3    int reverse(int x) 
4    {
5        int rev = 0;
6        while(x!=0)
7        {
8            int d = x%10;
9            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) return 0;
10            rev = rev*10+d;
11            x = x/10;
12        }
13
14        return rev;
15    }
16};