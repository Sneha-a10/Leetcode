# Last updated: 9/16/2025, 12:52:51 AM
class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        nums.sort()
        l = len(nums)/3
        a = []
        i = 0
        while(i<len(nums)):
            if nums.count(nums[i])> l:
                a.append(nums[i])
            i = next ((j for j in range(i, len(nums)) if nums[i] != nums[j]), len(nums))
            if i > len(nums)-l:
                break
        return a


            
            
        