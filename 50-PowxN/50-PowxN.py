# Last updated: 9/16/2025, 12:53:26 AM
class Solution:
    def myPow(self, x: float, n: int) -> float:
        def Pow(x,n):
            if n == 0:
                return 1
            if n == 1:
                return x
            h = Pow(x,n//2)
            if n % 2 == 0:
                return h * h
            else:
                return h * h * x
        if n < 0:
            return 1/Pow(x,-n)
        else:
            return Pow(x,n)

        