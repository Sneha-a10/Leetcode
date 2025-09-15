# Last updated: 9/16/2025, 12:53:16 AM
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        while(i<len(nums)-2):
            if nums[i]==nums[i+2]:
                nums.pop(i)
            else:
                i +=1
        return len(nums)

        