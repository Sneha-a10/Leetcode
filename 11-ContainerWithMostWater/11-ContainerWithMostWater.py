# Last updated: 9/16/2025, 12:53:48 AM
class Solution:
    def maxArea(self, height: List[int]) -> int:
        vol = 0
        i = 0 
        j = len(height)-1
        while(i<j):
            cv = (j-i)*min(height[i],height[j])
            vol = max(vol,cv)
            if height[i] > height[j]:
                j -=1
            elif height[j] > height[i]:
                i +=1
            else:
                i +=1
                j -=1
        return vol
        