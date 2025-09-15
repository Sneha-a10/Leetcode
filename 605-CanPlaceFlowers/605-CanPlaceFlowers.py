# Last updated: 9/16/2025, 12:52:32 AM
class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        p = 0
        l = len(flowerbed)
        if n == 0:
            return True
        if l == 0:
            return False
        if l == 1:
            return False if flowerbed[0] == 1 else True
       
        for i in range(l):
            if flowerbed[i] == 0:
                if i == 0:
                    if flowerbed[1] == 0:
                        p = p+1  
                        flowerbed[i] = 1
                elif i == l-1 :
                    if flowerbed[l-2] == 0:
                        p = p+1 
                        flowerbed[i] = 1
                else:
                    if flowerbed[i+1] == 0 and flowerbed[i-1]==0:
                        p = p+1 
                        flowerbed[i] = 1
        
        return True if p >=n else False
        