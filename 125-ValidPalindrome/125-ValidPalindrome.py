# Last updated: 9/16/2025, 12:53:08 AM
import re
class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = ''.join([i for i in s.lower() if i.isalnum()])
        return a == a[::-1]
    
