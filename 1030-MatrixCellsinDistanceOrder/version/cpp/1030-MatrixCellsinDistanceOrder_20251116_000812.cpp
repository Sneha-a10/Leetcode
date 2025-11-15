// Last updated: 11/16/2025, 12:08:12 AM
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) 
    {
        vector<vector<int>> res;
        vector<vector<int>> ch (rows*cols, vector<int>(3));
        int t = 0;
        for(int i = 0; i< rows; i++)
            for(int j = 0; j< cols; j++)
            {
                ch[t][0] = i;
                ch[t][1] = j;
                ch[t][2] = abs(rCenter-i) + abs(cCenter-j);
                t++;
            }
        
        sort(ch.begin(), ch.end(),[] (const vector<int> &a, const vector<int> &b){
         return a[2] < b[2];      // compare last column
     });

        for(int t = 0; t<ch.size(); t++)
            res.push_back({ch[t][0],ch[t][1]});

        return res;
    }
};