# Last updated: 9/16/2025, 12:52:29 AM
class Solution:
    def fib(self, n: int) -> int:
        # if n == 0:
        #     return 0
        # if n == 1:
        #     return 1
        # else:
        #     return self.fib(n-1) + self.fib(n-2)

        # memoization
        # def f (n: int, dp : dict) -> int:
        #     if n == 0:
        #         return 0
        #     if n == 1:
        #         return 1 
        #     if n in dp:
        #         return dp[n]
        #     else:
        #         dp[n] = f(n-1, dp)+f(n-2, dp)
        #         return dp[n]
        # d = {}
        # return f(n,d)

        #iterative , tablulation
        # d = {}
        # def f (n: int, dp : dict) -> int:
        #     dp[0], dp[1] = 0, 1
        #     for i in range(2, n+1):
        #         d[i] = dp[i-1]+dp[i-2]
        #     return dp[n]
        # return f(n,d)

        # Space optimization
        if n == 0:
            return 0
        if n == 1:
            return 1
        a, b = 0,1
        for i in range(2,n+1):
            c = a+b
            a = b 
            b = c
        return c


        