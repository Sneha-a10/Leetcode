// Last updated: 9/16/2025, 12:53:30 AM
class Solution {
    public int[] searchRange(int[] nums, int target)
    {
        int [] arr = {-1,-1};
        int len = nums.length;
        int a = -1;
        if(len == 0)
        return arr;

        int l = 0, r = len-1, mid;
        while(l<=r)
        {
            mid = (r+l)/2;
            if(nums[mid]==target)
            {
                a = mid;
                break;
            }    
            else if (nums[mid]>target)
                r = mid-1;
            else 
                l = mid +1;
        }
        if(a!=-1)
        {
            l = a;
            r = a;
            while( l >0 && nums[l-1] == target)
                l--;
            while( r <len-1 && nums[r+1] == target)
                r++;
            arr[0] = l;
            arr[1] = r;
        }
        return arr;
    }
}