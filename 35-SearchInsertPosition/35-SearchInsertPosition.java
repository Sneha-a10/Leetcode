// Last updated: 9/16/2025, 12:53:29 AM
class Solution {
    public int searchInsert(int[] nums, int target) 
    {
        int len = nums.length;
        int l = 0, r = len-1;
        int mid;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(nums[mid] == target)
                return mid; 
            else if (nums[mid]> target)
            r = mid -1;
            else if (nums[mid]<target)
            l = mid+1;
        }    
        return l;
    }
}