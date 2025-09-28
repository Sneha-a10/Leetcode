// Last updated: 9/28/2025, 4:54:54 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;

        for(int i =0; i< nums.size()-1; i++)
        {
            int l = i +1;
            int h = nums.size()-1;
            while(l<h)
            {
                if(nums[l] + nums[h] + nums[i] == 0)
                {
                    ans.insert({nums[i] , nums[l] , nums[h]});
                    int low = nums[l], high = nums[h];
                    l++; h--;
                    while(l<h && nums[l] == low) l++;
                    while(h>l && nums[h] == high) h--;
                }
                else if( nums[l] + nums[h] + nums[i] > 0)
                h--;
                else
                l++; 
                
            }
            while(i +1 <nums.size() && nums[i]== nums[i+1]) i++;
        }
        return vector< vector<int>> (ans.begin(), ans.end());
    }
};