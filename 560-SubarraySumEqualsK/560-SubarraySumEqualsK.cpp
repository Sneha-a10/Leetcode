// Last updated: 2/13/2026, 12:57:00 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int, int> m;
        m[0] = 1;
        int ans = 0, s = 0;
        for(int x : nums)
        {
            s +=x;
            if(m.count(s-k))
                ans+= m[s-k];
            
            m[s] +=1;            
        }
        return ans;
    }
};