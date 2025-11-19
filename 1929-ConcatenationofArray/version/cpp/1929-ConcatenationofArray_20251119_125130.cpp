// Last updated: 11/19/2025, 12:51:30 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        
        vector<int> ans;
        for(int i = 0, j = n; i < n; i++,j++) {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
        }
        return ans;
        
    }
};