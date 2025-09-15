// Last updated: 9/16/2025, 12:53:41 AM
class Solution {
    public int removeElement(int[] nums, int val) {
        int k = 0;
        int p = 0 ;
        int i = nums.length-1;
        while(i>=p)
        {
            if(nums[i] != val)
            {
                k++;
                int temp = nums[i];
                nums[i] = nums[p];
                nums[p] = temp;
                p++;
            }
            else
            i--;
        }

        return k;
    }
}