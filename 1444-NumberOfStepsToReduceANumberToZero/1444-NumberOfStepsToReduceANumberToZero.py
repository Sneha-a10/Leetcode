# Last updated: 9/16/2025, 12:52:26 AM
class Solution(object):
    def numberOfSteps(self, num):
        """
        :type num: int
        :rtype: int
        """
        step = 0
        while(num!=0):
            step +=1
            num = num/2 if num%2==0 else num-1
        
        return step

        