// Last updated: 2/13/2026, 12:57:05 PM
class Solution {
public:
    void merge( vector<int>& nums, int l, int m, int h)
    {
        vector<int> t;
        int i = l, j = m+1;
        while(i<=m && j<=h)
        {
            if(nums[i]>nums[j])
            t.push_back(nums[j++]);
            else
            t.push_back(nums[i++]);
        }

        while(i<=m) t.push_back(nums[i++]);
        while(j<=h) t.push_back(nums[j++]);

        for(int k: t)
        nums[l++] = k;
    }

    int count( vector<int>& nums, int l, int m, int h)
    {
        int j = m+1, c = 0;
        for(int i = l; i<=m; i++)
        {   
            while(j<=h && nums[i] > 2LL * nums[j]) j++;
            c += (j-(m+1));
        }
        return c;
    }

    int mergesort(vector<int>& nums, int l, int h)
    {
        int c = 0;
        if(l>=h) return c;
        int m = (l+h)/2;
        c += mergesort(nums, l, m);
        c += mergesort(nums, m+1, h);
        c += count(nums, l, m ,h);
        merge(nums, l, m ,h);
        return c;
    }
    int reversePairs(vector<int>& nums) 
    {
        int l = 0, h = nums.size()-1;
        return mergesort(nums,l,h);
    }
};