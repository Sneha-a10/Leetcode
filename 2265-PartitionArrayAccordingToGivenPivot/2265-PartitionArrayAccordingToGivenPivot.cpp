// Last updated: 2/13/2026, 12:55:59 PM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int i = 0;
        int j = nums.size()-1;
        int l = 0;
        int g = nums.size()-1;
        vector <int> ans (nums.size());
        while(i< nums.size() )
        {
            if(nums[i]<pivot)
            {
                ans[l] = nums[i];
                l++;
            }
            if(nums[j]>pivot)
            {
                ans[g] = nums[j];
                g--;
            }
            i++;
            j--;
        }

        while(l <=g)
        {
            ans[l] = pivot;
            l++;
        }
        return ans;
    }
};