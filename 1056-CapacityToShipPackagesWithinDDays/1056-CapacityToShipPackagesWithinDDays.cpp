// Last updated: 2/13/2026, 12:56:42 PM
class Solution {
public:
    bool poss(vector<int>& weights, int days, int cap)
    {
        int c = 1;
        int s = 0;
        for(int i: weights)
        {
            if(s+i <= cap)
                s+=i;
            else
            {
                c++;
                s = i;
            }
        }
        return (c <= days);
    }
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(), 0);
        int res = 0;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(poss(weights,days,m))
            {
                res = m;
                h = m-1;
            }
            else
            l = m+1;
        }
        return res;
    }
};