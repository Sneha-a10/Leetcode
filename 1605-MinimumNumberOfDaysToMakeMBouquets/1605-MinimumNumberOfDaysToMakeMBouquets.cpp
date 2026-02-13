// Last updated: 2/13/2026, 12:56:28 PM
class Solution {
public:
    bool possible(vector<int>& Day, int m, int k, int d)
    {
        int c = 0;
        int max = 0;
        for(int i : Day)
        {
            if(i<=d)
                c++;
            else
            {
                max += c/k;
                c = 0;
            }
        }
        max += c/k;
        return (max>=m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int n = bloomDay.size();
        if( (long) m*k >n) return -1;

        int l  = *min_element(bloomDay.begin(),bloomDay.end());
        int h  = *max_element(bloomDay.begin(),bloomDay.end());
        int res = -1;
        while(l<=h)
        {
            int mid = l+ (h-l)/2;

            if(possible(bloomDay,m,k,mid))
            {
                res = mid;
                h = mid-1;
            }
            else
                l = mid+1;
        }

        return res;

    }
};