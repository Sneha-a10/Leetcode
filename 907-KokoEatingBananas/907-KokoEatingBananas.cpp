// Last updated: 2/13/2026, 12:56:49 PM
class Solution {
public:
    long long hours(vector<int>& piles, int s)
    {
        long long c = 0;
        for(int i: piles)
        c += (i+s-1)/s;
        return c;
    }
    int minEatingSpeed(vector<int>& piles, int hr) 
    {
        int h = *max_element(piles.begin(),piles.end());
        int l = 1;
        int a = h;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            long long hrs = hours(piles,m);
            if(hrs <= hr)
            { 
                a = m;
                h = m-1;
            }
            else l = m+1;
        }
        return a;
    }
};