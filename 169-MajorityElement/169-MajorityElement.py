# Last updated: 9/16/2025, 12:52:59 AM
class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        i = 0 

        while(i<len(nums)):

            if nums.count(nums[i]) > len(nums)//2:
                return nums[i]

            else:
                i = next((j for j in range(i, len(nums)) if nums[j] != nums[i]), len(nums))


        