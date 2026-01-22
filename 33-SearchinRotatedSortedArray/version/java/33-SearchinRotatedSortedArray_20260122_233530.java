// Last updated: 1/22/2026, 11:35:30 PM
1class Solution 
2{
3    public int search(int[] nums, int target) 
4    {
5        int l = 0, r = nums.length-1;
6        while(l<=r)
7        {
8            int mid = (l+r)/2;
9            if(nums[mid]==target)
10                return mid;
11            if(nums[l]<=nums[mid])
12            {
13                if(nums[l]<=target && nums[mid]>target)
14                    r = mid -1;
15                else
16                    l = mid+1;
17            }
18            else
19            {
20                if(nums[mid]<target && nums[r]>=target)
21                   l = mid+1;
22                else
23                    r = mid -1;
24            }
25
26        }  
27        return -1;
28    }
29}