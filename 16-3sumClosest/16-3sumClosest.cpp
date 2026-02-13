// Last updated: 2/13/2026, 12:58:38 PM
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
            int l = i +1, h = nums.size()-1;
            int s;
            while(l<h)
            {
                s = nums[i]+ nums[l] +nums[h];
                if(s > target)
                h --;
                else if (s < target)
                l ++;
                else
                return target;
                if(count > abs(target-s))
                {
                    sum = s;
                    count = abs(target-s);
                }
            }
        }
        return sum;
    }
};