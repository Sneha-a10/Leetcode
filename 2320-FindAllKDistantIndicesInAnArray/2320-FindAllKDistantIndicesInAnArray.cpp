// Last updated: 2/13/2026, 12:55:56 PM
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) 
    {
        int l = nums.size();
        set <int> ans;
        for(int i =0; i<l; i++)
        {
            if(nums[i]== key)
            {
                for( int j = max(0, i-k); j <=min(l-1, i+k); j++)
                {
                    ans.insert(j);
                }
            }
        }
        return vector <int> (ans.begin(), ans.end());
    }
};