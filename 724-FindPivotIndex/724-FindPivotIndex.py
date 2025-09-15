# Last updated: 9/16/2025, 12:52:31 AM
class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = len(nums)
        rs, ls = sum(nums), 0
        for i,e in enumerate(nums):
            rs -=e
            if ls == rs:
                return i
            ls +=e   
        return -1
        