// Last updated: 9/16/2025, 12:53:53 AM
class Solution {
    public int maxArea(int[] height) 
    {
        int ri = height.length - 1;
        int max = 0;
        int le = 0;
        while(le < ri)
        {

            int a = (height[le]>height[ri] ? height[ri] : height[le])*(ri-le);
            max = a>max ? a : max;
            if(height[le]<height[ri])
                le++;
            else
            ri--;
        }
        return max;
    }
}