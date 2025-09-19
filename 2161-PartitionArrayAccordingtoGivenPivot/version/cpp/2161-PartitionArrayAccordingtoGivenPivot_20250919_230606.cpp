// Last updated: 9/19/2025, 11:06:06 PM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector <int> less;
        vector <int> great;
        int c = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]> pivot)
                great.push_back(nums[i]);
            else if (nums[i]< pivot)
                less.push_back(nums[i]);
            else
            c++;
        }
        while(c>0)
        {
            less.push_back(pivot);
            c--;
        }
        
        for(int i = 0; i<great.size(); i++)
            less.push_back(great[i]);
        return less;
    }
};