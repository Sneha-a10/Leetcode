# Last updated: 9/16/2025, 12:52:35 AM
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        c = 0
        m = 0
        i = 0
        while(i < len(nums)):
            if nums[i] == 1:
                c +=1
            else:
                m = max(c,m)
                c = 0
            i += 1
        return max (m,c)