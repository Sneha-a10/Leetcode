# Last updated: 9/16/2025, 12:52:39 AM
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        d = {}

        if len(ransomNote)> len(magazine):
            return False

        for i in ransomNote:
            if i not in d:
                d[i] = ransomNote.count(i)
        
        for k, val in d.items():
            if k not in magazine:
                return False
            if d[k] > magazine.count(k):
                return False
        return True

                

        
        
        