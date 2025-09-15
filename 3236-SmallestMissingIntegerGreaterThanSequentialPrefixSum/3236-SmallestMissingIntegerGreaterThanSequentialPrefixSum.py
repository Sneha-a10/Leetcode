# Last updated: 9/16/2025, 12:52:17 AM
class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        s = nums[0]
        for i in range(1,len(nums)):
            if nums[i] == nums[i-1]+1:
                s += nums[i]
            else:
                break
        if s in nums:
            while( s in nums):
                s = s+1 
        return s
            
        