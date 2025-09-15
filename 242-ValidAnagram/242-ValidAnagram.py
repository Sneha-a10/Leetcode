# Last updated: 9/16/2025, 12:52:48 AM
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return True if sorted(s) == sorted(t) else False

            

        