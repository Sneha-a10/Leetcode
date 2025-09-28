// Last updated: 9/28/2025, 5:19:38 PM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int sum = nums[0]+nums[1]+nums[2];
        int count = abs (target -sum);

        sort(nums.begin(), nums.end());
        for( int i = 0; i<nums.size()-2; i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue;
            for( int j = i+1; j<nums.size()-1; j++)
            {
                for( int k = j+1; k<nums.size(); k++)
                {
                    if(count > abs(target -(nums[i]+nums[j]+nums[k])) )
                    { 
                        sum = nums[i]+nums[j]+nums[k];
                        count = abs(target - sum);
                    }
                        
                }
            }
        }
        return sum;
    }
};