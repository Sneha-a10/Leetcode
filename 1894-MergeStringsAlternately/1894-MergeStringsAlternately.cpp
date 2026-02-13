// Last updated: 2/13/2026, 12:56:18 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int i = 0, j = 0;
        string w;
        while( i <word1.size()&& j <word2.size())
        {
            w += word1[i];
            w += word2[j];
            i++; j++;
        }
        while(i<word1.size())
        {
            w += word1[i];
            i++;
        }
        
        while(j<word2.size())
        {
            w += word2[j];
            j++;
        }

        return w;
    }
};