# Last updated: 9/16/2025, 12:52:23 AM
class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        word = []
        for i in range(0,max(len(word1),len(word2))):
            if i < len(word1):
                word.append(word1[i])
            if i < len(word2):
                word.append(word2[i])
        return "".join(word)
        