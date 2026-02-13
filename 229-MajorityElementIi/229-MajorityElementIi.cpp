// Last updated: 2/13/2026, 12:57:35 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int c1 = 0, c2= 0;
        int el1 = INT_MIN, el2 = INT_MIN;

        for(int i = 0; i<nums.size(); i++)
        {
            if(c1 == 0 && nums[i] != el2)
            {
                el1 = nums[i];
                c1 = 1;
            }
            else if(c2 == 0 && nums[i] != el1)
            {
                el2 = nums[i];
                c2 = 1;
            }
            else if (nums[i] == el1) c1++;
            else if (nums[i] == el2) c2++;
            else
            {
                c1--;
                c2--;
            }
        }

        c1 = count(nums.begin(), nums.end(), el1);
        c2 = count(nums.begin(), nums.end(), el2);

        vector<int> res;

        if(c1 >= (nums.size()/3)+1)
            res.push_back(el1);
        if ((c2 >= (nums.size()/3)+1) && el1!= el2)
            res.push_back(el2);

        return res;
    
    }
};