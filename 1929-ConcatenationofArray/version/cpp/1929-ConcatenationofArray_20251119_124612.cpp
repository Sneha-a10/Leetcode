// Last updated: 11/19/2025, 12:46:12 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i=0; i<2*n; i++){
            ans.push_back(nums[i%n]);
        }
        return ans;
    }
};