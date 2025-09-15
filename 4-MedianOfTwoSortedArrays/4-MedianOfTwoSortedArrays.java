// Last updated: 9/16/2025, 12:53:51 AM
import java.util.Arrays;

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) 
    {
        int n1 = nums1.length;
        int n2 = nums2.length;
        int n3 = n1 + n2;
        int [] num = new int[n3];
        for (int i=0 ; i<n3; i++)
        {
            if (i<n1)
                num[i] = nums1[i];
            else 
                num[i] = nums2[i-n1];
        }

        Arrays.sort(num);

        if (n3%2 == 0)
        {
            n3 = n3/2;
            return (num[n3]+num[n3-1])*1.0/2;
        }
        else
            return num[n3/2] * 1.0;
    }
}