// Last updated: 2/13/2026, 12:58:30 PM
class Solution {
public:
    void nextPermutation(vector<int>& v) 
    {
        int j = v.size()-1;
        while(j> 0 && v[j ]<=v[j-1]) j--;
        
        if(j == 0)
        {
            reverse(v.begin(), v.end());
            return;
        }

        int i = v.size()-1;
        while(i >= j && v[i] <= v[j-1]) i--;

        swap( v[i], v[j-1]);
        reverse( v.begin()+j, v.end());

        return;

    }
};