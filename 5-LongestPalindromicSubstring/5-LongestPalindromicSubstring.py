# Last updated: 9/16/2025, 12:53:50 AM
class Solution:
    def ispalindrome(self, a: str) -> bool:
        if a == a[::-1]:
            return True
        else:
            return False
    def longestPalindrome(self, s: str) -> str:
        ans = s[0]
        m = 0
        if len(s) == 1:
            return ans
        for i in range(len(s)):
            for j in range(i+1,len(s)):
                if self.ispalindrome(s[i:j+1]):
                    if len(s[i:j+1]) > m:
                        ans = s[i:j+1]
                        m = len(ans)
        return ans


        