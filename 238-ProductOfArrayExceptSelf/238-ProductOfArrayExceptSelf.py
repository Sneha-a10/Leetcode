# Last updated: 9/16/2025, 12:52:49 AM
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        answer = []
        for i in range(len(nums)):
            pos = nums.index(nums[i])
            if  pos < i:
                answer.append (answer[pos])
            else:
                a = nums[:i]+ nums[i+1:]
                answer.append(math.prod(a)) 
        
        return answer
        