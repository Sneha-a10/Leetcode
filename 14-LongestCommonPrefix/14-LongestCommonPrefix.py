# Last updated: 9/16/2025, 12:53:44 AM
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        le = min(len(i) for i in strs)
        ans = ""
        for i in range(le):
            ch = True
            for j in range(len(strs)):
                if strs[j][i]!= strs[0][i]:
                    ch = False
                    break
            if ch:
                ans = ans + strs[0][i]
            else:
                break
        return ans


        

        