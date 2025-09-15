# Last updated: 9/16/2025, 12:53:03 AM
class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s = s.split()
        s = s[::-1]
        s = " ".join(s)
        return s
        