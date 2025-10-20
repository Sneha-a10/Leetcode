// Last updated: 10/20/2025, 5:39:29 PM
class Solution {
public:
    int nextGreaterElement(int n) 
    {
        string ans = to_string(n);
        int i = ans.length()-2, j = ans.length()-1;
        
        while(i>=0 && ans[i]>=ans[i+1]) i--;
        
        if( i < 0 ) 
            return -1;
        
        while(j > i-1 && ans[j]<=ans[i]) j--;

        swap(ans[i],ans[j]);

        reverse(ans.begin()+i+1 ,ans.end());

        long res = stol(ans);

        return (res <= INT_MAX) ? int(res) : -1;

    }
};