# Last updated: 9/16/2025, 12:53:46 AM
class Solution:
    def intToRoman(self, num: int) -> str:
        r = {1 : 'I', 4: 'IV', 5 : 'V',9: 'IX',
             10 : 'X', 40: 'XL', 50 : 'L', 90: 'XC',
             100: 'C', 400: 'CD', 500: 'D',900: 'CM', 1000 : ' M'
            }
        ans = ""
        for v in sorted(r.keys(), reverse=True):
            while num >= v:
                ans += r[v]
                num -= v
        ans = ans.replace(" ", "")
        return ans
        
        

