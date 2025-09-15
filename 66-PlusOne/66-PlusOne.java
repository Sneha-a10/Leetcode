// Last updated: 9/16/2025, 12:53:21 AM
class Solution {
    public int[] plusOne(int[] digits)
    {
        int len = digits.length-1;
        if(digits[len]!=9)
        digits[len]++;
        else
        {    
            while(digits[len]==9 && len>0)
            {
                digits[len] = 0;
                len --;
            }
            if(len>=0)
            digits[len--]++;

            if(digits[0]>9)
            {
                int[] arr = new int[digits.length+1];
                arr[0] = 1;
                for(int i=1; i<arr.length; i++)
                arr[i] = 0;
                return arr;
            }
            
        }
        return digits;
    }
}