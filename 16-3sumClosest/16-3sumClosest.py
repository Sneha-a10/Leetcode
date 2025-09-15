# Last updated: 9/16/2025, 12:53:40 AM
class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        md = float('inf')
        s = float('inf')
        
        for i in range(len(nums)-2):
            j = i+1
            k = len(nums)-1

            while(j<k):
                t = nums[i]+nums[j]+nums[k]
                c = abs(t - target)

                if c < md:
                    md = c
                    s = t

                if t > target:
                    k -= 1     
                else:
                    j +=1
        
        return s

            


        