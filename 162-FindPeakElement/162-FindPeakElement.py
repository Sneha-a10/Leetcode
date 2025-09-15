# Last updated: 9/16/2025, 12:53:02 AM
class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        m = max(nums)
        return nums.index(m)