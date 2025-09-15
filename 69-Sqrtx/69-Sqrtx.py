# Last updated: 9/16/2025, 12:53:20 AM
class Solution:
    def mySqrt(self, x: int) -> int:
        l, r = 1, x
        ans = 0
        while(l<=r):
            mid = l+(r-l)//2
            if mid*mid == x:
                return mid
            elif mid*mid < x:
                ans = mid
                l = mid+1
            else:
                r = mid-1
        return ans



        