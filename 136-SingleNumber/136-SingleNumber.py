# Last updated: 9/16/2025, 12:53:07 AM
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums.sort()
        for i in range(len(nums)):
            if nums.count(nums[i]) == 1:
                return nums[i]
            while(i>0 and nums[i-1]==nums[i]):
                i+=1
            
        