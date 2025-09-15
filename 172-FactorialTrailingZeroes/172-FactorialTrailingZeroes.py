# Last updated: 9/16/2025, 12:52:58 AM
import math
class Solution:
    def trailingZeroes(self, n: int) -> int:
        c = 0
        while(n>=5):
            n = n//5
            c += n
        return c
        