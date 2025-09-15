# Last updated: 9/16/2025, 12:52:44 AM
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s = s.split()
        if len(s)!= len(pattern):
            return False
        d = {}
        st = set()
        i = 0
        while(i<len(pattern)):
            if pattern[i] not in d:
                if s[i] in st:
                    return False
                d[pattern[i]] = s[i]
                st.add(s[i])
            else:
                if d[pattern[i]] != s[i]:
                    return False
            i +=1
        return True

        