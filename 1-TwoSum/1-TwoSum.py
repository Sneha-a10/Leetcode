# Last updated: 9/16/2025, 12:53:54 AM
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d ={}
        for i,e in enumerate(nums):
            if target-e in d:
                return [d[target-e],i]
            d[e]=i