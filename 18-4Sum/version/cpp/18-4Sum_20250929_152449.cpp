// Last updated: 9/29/2025, 3:24:49 PM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int len = nums.size();
        sort(nums.begin(), nums.end());

        set<vector<int>> ans;

        for(int i = 0; i<len-3; i++)
        {
            while( i> 0 && nums[i-1]== nums[i]) i++;
            for( int j = i+1; j<len-2; j++)
            {
                // while( nums[j-1]== nums[j]) j++;
                int l = j+1, h = len-1;

                while(l<h)
                {
                    long long s = (long long) nums[i]+nums[j]+ nums[l]+ nums[h];
                    if(s == target)
                    {
                       ans.insert({nums[i], nums[j], nums[l], nums[h]});
                       l ++; h--;
                    }
                    else if (s > target)
                    h--;
                    else
                    l++;
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};