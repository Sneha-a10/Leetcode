# Last updated: 9/16/2025, 12:53:24 AM
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = s.split()
        return len(s[-1])
    
        
        