# Last updated: 9/16/2025, 12:53:49 AM
class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = str(x)
        return True if s== s[::-1] else False
        