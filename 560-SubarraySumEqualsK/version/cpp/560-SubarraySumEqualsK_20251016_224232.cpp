// Last updated: 10/16/2025, 10:42:32 PM
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