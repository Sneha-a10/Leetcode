# Last updated: 9/16/2025, 12:52:21 AM
class Solution(object):
    def findMiddleIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ls, rs = 0, sum(nums)
        for i,e in enumerate(nums):
            rs -= e
            if ls == rs:
                return i
            ls +=e
        return -1
        