# Last updated: 9/16/2025, 12:52:43 AM
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if (n <=0):
            return False
        if n == 1:
            return True
        if (n % 3 != 0):
            return False
        else:
            return self.isPowerOfThree(n/3)
           
            


            
        

        