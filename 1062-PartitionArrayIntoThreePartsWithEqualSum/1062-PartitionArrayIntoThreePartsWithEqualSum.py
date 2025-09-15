# Last updated: 9/16/2025, 12:52:27 AM
class Solution:
    def canThreePartsEqualSum(self, arr: List[int]) -> bool:
        s = sum(arr)
        if(s%3==0):
            s = s//3
            cs = 0
            p = 0
            for i in range (len(arr)):
                cs += arr[i]  
                if cs == s:
                    p +=1
                    cs = 0
                    if p == 2 and i <len(arr)-1:
                        return True 
            return False
        else:
            return False
        