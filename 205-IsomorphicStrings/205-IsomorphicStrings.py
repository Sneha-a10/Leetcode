# Last updated: 9/16/2025, 12:52:54 AM
class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        d = {}
        st = set()
        i = 0
        while(i<len(s)):
            if s[i] not in d:
                if t[i] in st:
                    return False
                d[s[i]] = t[i]
                st.add(t[i])
            else:
                if d[s[i]] != t[i]:
                    return False
            i +=1
        return True
        