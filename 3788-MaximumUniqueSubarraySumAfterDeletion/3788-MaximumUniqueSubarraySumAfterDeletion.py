# Last updated: 9/16/2025, 12:52:15 AM
class Solution:
    def maxSum(self, nums: List[int]) -> int:
        nums.sort()
        i = 0
        while(i<len(nums)-1):
            if nums[i]<1:
                nums.remove(nums[i])
                continue
            if nums[i] == nums[i+1]:
                nums.remove(nums[i])
            else:
                i +=1
        return sum(nums)
        