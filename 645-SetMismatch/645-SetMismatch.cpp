// Last updated: 2/13/2026, 12:56:58 PM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int d, m, n = nums.size();
        int s = n*(n+1)/2, sn = 0;
        long long sq = 1LL* n*(n+1)*(2*n+1)/6, sqn = 0;

        for(int i: nums)
        {
            sn += i; 
            sqn += 1LL* i*i;
        }

        long long r = (sqn - sq)/ (sn-s);

        m = ((sn-s) + r)/2;

        d = r - m;

        return {m,d};


    }
};