// Last updated: 9/30/2025, 12:35:27 PM
class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) 
    {
        int a = 0, b = plants.size()-1;
        int fill = 0;
        int cA = capacityA, cB = capacityB;
        while(a<=b)
        {
            if (a == b)
            {
                if(max(capacityA, capacityB) < plants[a])
                    fill ++;
                break;
            }
            if(capacityA >= plants[a])
            {
                capacityA -= plants[a];
                a++;
            }
            else
            {
                fill ++;
                capacityA = cA;
                capacityA -= plants[a];
                a++;
            }
            if(capacityB >= plants[b])
            {
                capacityB -=plants[b];
                b--;
            }
            else
            {
                fill ++;
                capacityB = cB;
                capacityB -= plants[b];
                b--;
            }
        }
        return fill;
    }
};