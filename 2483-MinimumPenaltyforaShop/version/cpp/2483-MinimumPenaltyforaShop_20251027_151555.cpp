// Last updated: 10/27/2025, 3:15:55 PM
class Solution {
public:
    int bestClosingTime(string customers) 
    {
        vector<int> pre (customers.size()+1);
        for (int i =0; i<pre.size()-1; i++)
            pre[i+1] = pre[i] + int(customers[i]=='Y');

        int ans = 0;
        int min = INT_MAX;

        for(int i = 0; i<= customers.size();i++)
        {
            int t = (i - pre[i]) + (pre.back() - pre[i]) ;
            if(min > t)
            {
                ans = i;
                min = t;
            }

        }
        return ans;
    }
};