# Last updated: 9/16/2025, 12:52:38 AM
class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(t)<len(s):
            return False
        if len(t)==len(s):
            return True if t == s else False

        p = 0
        for i in range(len(s)):
            if s[i] in t[p::]:
                p = t[p::].index(s[i])+1+p
            else:
                return False
        return True



