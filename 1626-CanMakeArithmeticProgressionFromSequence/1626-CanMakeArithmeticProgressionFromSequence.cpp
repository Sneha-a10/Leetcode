// Last updated: 2/13/2026, 12:56:26 PM
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        sort( arr.begin(), arr.end());
        int d = arr[1] - arr[0];
        for(int i = 1; i<arr.size(); i++)
        {
            if(arr[i]-arr[i-1] !=d)
            return false;
        }
        return true;
    }
};