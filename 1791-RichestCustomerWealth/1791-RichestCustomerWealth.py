# Last updated: 9/16/2025, 12:52:25 AM
class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        ma = 0 
        for i in accounts:
            sum = 0
            for j in i:
                sum = sum + j;
            ma = max(ma,sum)

        return ma
        