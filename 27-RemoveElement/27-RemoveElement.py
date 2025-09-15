# Last updated: 9/16/2025, 12:53:35 AM
class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        n = len(nums)
        p = n-1
        i = n-1
        while(i>=0):
            if(nums[i]==val):
                if i < p:
                    nums[i], nums[p] = nums[p], nums[i]
                p -= 1
            i -= 1
                
        return p+1
        