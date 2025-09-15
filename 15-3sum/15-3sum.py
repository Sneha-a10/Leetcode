# Last updated: 9/16/2025, 12:53:42 AM
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        a = []
        nums.sort()

        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            
            j = i+1
            k = len(nums)-1

            while j < k:
                t = nums[i]+nums[j]+nums[k]
                if t > 0:
                    k -=1
                elif t < 0:
                    j +=1
                else:
                    a.append([nums[i],nums[j],nums[k]])
                    j +=1
                     
                    while(nums[j]== nums[j-1] and j < k): 
                        j +=1
        return a

        # d = {}
        # for j in range(len(nums)):
        #     for k in range(j+1, len(nums)):
        #         v = -1 *( nums[j]+nums[k])
        #         if v in d:
        #             for i in d[v]:
        #                 ans = [nums[i],nums[j],nums[k]]
        #                 ans.sort()
        #                 if ans not in a:
        #                     a.append(ans)
        #     if nums[j] not in d:
        #         d[nums[j]] = []
        #     d[nums[j]].append(j)
        
                    
