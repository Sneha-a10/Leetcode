# Last updated: 9/16/2025, 12:52:53 AM
class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        d = {}
        for i,e in enumerate(nums):
            if e in d and i - d[e] <= k:
                return True
            else:
                d[e] = i
        return False 

         