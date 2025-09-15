# Last updated: 9/16/2025, 12:53:38 AM
class Solution:
    def isValid(self, s: str) -> bool:
        d = { '(': ')', '[':']', '{':'}'}
        st = []

        if len(s)%2 !=0 or s[0] in d.values():
            return False

        for ch in s:
            if ch in d:
                st.append(ch)
            elif len(st) == 0 or d[st.pop()] != ch:
                return False
    
        return len(st) == 0

        

            
        