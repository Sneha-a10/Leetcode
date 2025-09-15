# Last updated: 9/16/2025, 12:52:55 AM
class Solution:
    def isHappy(self, n: int) -> bool:
        ha = set()
        def happy(n):
            if (n == 1):
                return True
            if n in ha:
                return False
            ha.add(n)
            s = 0
            while(n > 0):
                d = n % 10
                s = s + d*d
                n = n//10
           
            return happy(s)
        return happy(n)

        