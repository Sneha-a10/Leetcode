// Last updated: 9/30/2025, 12:15:43 PM
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int s = 0, e = height.size()-1;
        int v = 0;
        while(s<e)
        {
            int vol = min(height[s],height[e]) * (e-s);
            if(vol>v)
                v = vol;
            if(height[s]>=height[e])
                e--;
            else
                s++;
        }
        return v;
    }
};