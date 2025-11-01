// Last updated: 11/1/2025, 10:55:52 PM
class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) 
    {
        long long sum = 0;
        long long prefix = 0;
        int MOD = 1000000007;
        vector<long long> final;
        for(int i = 0; i<nums.size(); i++)
        {
            if(s[i] == 'R')
                final.push_back((long long)nums[i] + d);
            else
                final.push_back((long long)nums[i] - d);
        }
        sort(final.begin(),final.end());

        for(int i = 0; i<nums.size(); i++)
        {
            sum = (sum + i* final[i] - prefix)%MOD;
            prefix += final[i];
        }
        
        return (sum + MOD)% MOD;
    }
};