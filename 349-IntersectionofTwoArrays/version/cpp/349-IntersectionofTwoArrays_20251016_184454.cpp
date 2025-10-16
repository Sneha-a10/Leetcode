// Last updated: 10/16/2025, 6:44:54 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        set <int> ans;

        for( int n : nums1)
        {
            if(count(nums2.begin(), nums2.end(), n))
            ans.insert(n);
        }
        return vector<int> (ans.begin(), ans.end());
    }
};