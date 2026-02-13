// Last updated: 2/13/2026, 12:56:25 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int l = 0, h = arr.size()-1;
        while(l<=h)
        {
            int m = l + (h-l)/2;
            int miss = arr[m] - (m+1);
            if(miss<k) l = m+1;
            else h = m-1;
        }
        return k+h+1;
    }
};