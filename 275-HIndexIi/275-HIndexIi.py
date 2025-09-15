# Last updated: 9/16/2025, 12:52:46 AM
class Solution:
    def hIndex(self, citations: List[int]) -> int:
        h = 0
        for i in range(len(citations)-1,-1,-1):
            if citations[i] > h:
                h +=1
        return h
        