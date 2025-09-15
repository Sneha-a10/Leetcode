# Last updated: 9/16/2025, 12:53:45 AM
class Solution:
    def romanToInt(self, s: str) -> int:
        r = {'I':1, 'V':5, 'X':10, 'L':50,'C':100,'D':500,'M':1000}
        ans = 0
        for i in range(len(s)):
            n = r[s[i+1]] if i+1 <len(s) else 0
            ans = (ans - r[s[i]]) if n > r[s[i]] else ans +r[s[i]]
        return ans

            
        

        
