# Last updated: 9/16/2025, 12:52:40 AM
class Solution:
    def superPow(self, a: int, b: List[int]) -> int:
        b = int("".join(map(str, b)))
        # def po(x,n):
        #     if n == 0:
        #         return 1
        #     if n == 1:
        #         return x
        #     h = po(x,n//2)
        #     if n % 2 == 0:
        #         return (h*h) %1337
        #     else:
        #         return (h*h*x) %1337
        
        return pow(a,b,1337)